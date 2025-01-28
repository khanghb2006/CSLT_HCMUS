#include<iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

const int mxN = 10000;

int main() {
    char line[mxN];
    while(true) {
        cin.getline(line,mxN);
        // cout << line << "\n";
        char *s = new char[strlen(line) + 1];
        strcpy(s,line);
        cout << s << "\n";
        if(*(s + (strlen(s) - 1)) == '.') break;
        delete[] s;
    }
}