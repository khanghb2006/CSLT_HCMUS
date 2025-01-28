#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<fstream>

#include "proc.h"

using namespace std;

void save_img(BMP &bmp,char *filename) {
    FILE *img_name = fopen(filename, "wb");
    fwrite(&bmp.header, sizeof(bmp.header), 1, img_name);
    fwrite(&bmp.dib, sizeof(bmp.dib), 1, img_name);

    int padding = (4 - (bmp.dib.width * 3) % 4) % 4;

    for (int i = 0; i < bmp.dib.height; ++i) {
        fwrite(bmp.pixel[bmp.dib.height - i - 1], 3, bmp.dib.width, img_name);
        for (int j = 0; j < padding; j++) {
            fwrite("\0", 1, 1, img_name);
        }
    }
    fclose(img_name);
}

void load_img(BMP &new_bmp,BMP &bmp,int new_height,int new_width,int x,int y,char *filename) {
    new_bmp.header = bmp.header;
    new_bmp.dib = bmp.dib;
    new_bmp.dib.height = new_height;
    new_bmp.dib.width = new_width;
    new_bmp.pixel = new Pixel*[new_height];
    new_bmp.header.size = 14 + new_bmp.dib.size + new_bmp.dib.width * new_bmp.dib.height * 3; 

    for (int i = 0; i < new_height; ++i) {
        new_bmp.pixel[i] = new Pixel[new_width];
        memcpy(new_bmp.pixel[i], bmp.pixel[x * new_height + i] + y * new_bmp.dib.width, new_width * sizeof(Pixel));
    }

    save_img(new_bmp,filename);
    delete [] filename;
    new_bmp.free_data();
}

void cutBMP(int argc,char ** argv) {

    if(argc < 2) {
        cout << "Usage: " << argv[0] << " <Bitmap file> [-h <parts in height>] [-w <parts in width>]" << endl;
        return;
    }

    BMP bmp(argv[1]);

    int part_Height = 0, part_Width = 0;

    if(strcmp(argv[2],"-h") == 0) part_Height = atoi(argv[3]);
    else part_Height = 1;
    if(strcmp(argv[4],"-w") == 0) part_Width = atoi(argv[5]);
    else part_Width = 1;

    if(part_Height < 0 || part_Width < 0) {
        cout << "Error: Invalid number of parts" << endl;
        return;
    }

    if(bmp.dib.height < part_Height || bmp.dib.width < part_Width) {
        cout << "Error: Invalid number of parts" << endl;
        return;
    }

    int new_Height = bmp.dib.height / part_Height;
    int new_Width = bmp.dib.width / part_Width; 

    BMP **new_bmp = new BMP*[part_Height];

    int num_img = 0;

    for (int i = 0; i < part_Height; ++i) {
        new_bmp[i] = new BMP[part_Width];
        for (int j = 0; j < part_Width; ++j)  {
            char *filename = new char[1000];
            ++num_img;
            sprintf(filename, "part_%d.bmp",num_img);
            load_img(new_bmp[i][j],bmp,new_Height,new_Width,i,j,filename);
        }
    }
    bmp.free_data();
}