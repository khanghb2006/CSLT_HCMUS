#include <iostream>
#include <fstream>
#include "proc.h"
using namespace std;
int main(){
    fstream f("MATRIX.TXT", ios::in);
    fstream F("OUTPUT.TXT", ios::out);
    int a[1000][1000];
    int n,m;
    input(f,a,n,m);
    output(F,a,n,m);
}