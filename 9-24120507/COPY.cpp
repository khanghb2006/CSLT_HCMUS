#include<iostream>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

using namespace std;

const int mxN = 10000;

void copy_file(char *src,char *dest) {
    FILE *src_file = fopen(src,"rb");
    FILE *dest_file = fopen(dest,"wb");

    if(src_file == NULL) {
        cout << "non-file" << "\n";
        return;
    }

    size_t num_byte = 0;
    char line[mxN];
    while(true) {
        num_byte = fread(line,1,mxN,src_file);
        if(num_byte <= 0) break;
        fwrite(line,1,num_byte,dest_file);
    }
    fclose(src_file);
    fclose(dest_file);
}

void show_help() {
    cout << "Syntax 1 : copy source file to destination file : " << "\n";
    cout << "COPY <source file> <destination file>" << "\n";
    cout << "Syntax 2 : copy source file to destination path(keep filename)" << "\n";
    cout << "COPY <source file> <destination path>/" << "\n";
    cout << "Syntax 3 : join file 1 and file 2 to destination file : " << "\n";
    cout << "COPY <file1> + <file2> <destination file>" << "\n";
    cout << "Syntax 4 : show help" << "\n";
    cout << "COPY -?" << "\n";
}

int main(int argc,char ** argv) {
    if(argc == 3) {
        char *p = NULL;
        if(argv[2][strlen(argv[2]) - 1] != '/') {
            char *src = argv[1];
            char *des = argv[2];
            copy_file(src,des);
        }
        else {
            char *slash = strchr(argv[1],'/');
            char * file_name = NULL;
            if(slash == NULL) file_name = argv[1];
            else file_name = slash + 1;
            char *des = new char [strlen(argv[2]) + strlen(file_name) + 1];
            strcpy(des,argv[2]);
            strcpy(des + strlen(argv[2]),file_name);
            copy_file(argv[1],des);
        }
        
        return 0;
    }
    
    if(argc == 5 && strchr(argv[2],'+') != NULL) {
        FILE *src1_file = fopen(argv[1],"rb");
        FILE *src2_file = fopen(argv[3],"rb");
        FILE *dest_file = fopen(argv[4],"wb");
        
        if(src1_file == NULL) {
            cout << "non-file" << "\n";
            fclose(src2_file);
            fclose(dest_file);
            return 0;
        }

        if(src2_file == NULL) {
            cout << "non-file" << "\n";
            fclose(src1_file);
            fclose(dest_file);
            return 0;
        }

        size_t num_byte = 0;
        char line[mxN];

        while(true) {
            num_byte = fread(line,1,mxN,src1_file);
            if(num_byte <= 0) break;
            fwrite(line,1,num_byte,dest_file);
        }

        num_byte = 0;
        while(true) {
            num_byte = fread(line,1,mxN,src2_file);
            if(num_byte <= 0) break;
            fwrite(line,1,num_byte,dest_file);
        }

        fclose(src1_file);
        fclose(src2_file);
        fclose(dest_file);
        return 0;
    }

    if(!strcmp(argv[1],"-?")) show_help();
}