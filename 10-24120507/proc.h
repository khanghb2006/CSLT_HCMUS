#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<fstream>

using namespace std;

#pragma pack(push, 1)

struct Header {
    uint16_t type;
    uint32_t size;
    uint16_t reserved1;
    uint16_t reserved2;
    uint32_t offBits;
};

struct DIB {
    uint32_t size;
    uint32_t width;
    uint32_t height;
    uint16_t planes;
    uint16_t bitCount;
    uint32_t compression;
    uint32_t sizeImage;  
    uint32_t xPixel;
    uint32_t yPixel;
    uint32_t clrUsed;
    uint32_t clrImportant;
};

#pragma pack(pop)

struct Color {
    uint8_t Blue;
    uint8_t Green;
    uint8_t Red;
};

struct Pixel {
    Color color;
};

struct BMP {
    Header header;
    DIB dib;
    Pixel **pixel;
    
    BMP() {}

    BMP(char *filename) {
        FILE *img_name = fopen(filename, "rb");
        
        if(!img_name) {
            cout << "Error: Cannot open file " << filename << endl;
            return;
        }

        fread(&header, sizeof(header), 1, img_name);    
        fread(&dib, sizeof(dib), 1, img_name);
        pixel = new Pixel*[dib.height];
        int padding = (4 - (dib.width * sizeof(Pixel)) % 4) % 4;
        int real_width = dib.width * sizeof(Pixel) + padding;
        
        for (int i = 0; i < dib.height; i++) {
            pixel[dib.height - i - 1] = new Pixel[dib.width];
            fread(pixel[dib.height - i - 1], sizeof(Pixel), dib.width, img_name);
            fseek(img_name, padding, SEEK_CUR);
        }

        fclose(img_name);
    }

    void free_data() {
        for (int i = 0 ; i < dib.height; ++i) 
            delete[] pixel[i];
        delete[] pixel;
    }
};

void save_img(BMP &bmp,char *filename);

void load_img(BMP & new_bmp,BMP & bmp,int new_height,int new_width,int x,int y,char *filename);

void cutBMP(int argc,char **argv);