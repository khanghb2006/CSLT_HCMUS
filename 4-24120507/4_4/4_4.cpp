#include<iostream>
#include<stdio.h>
#include<sstream>
#include "4_1\4_1.h"
#include "4_2\4_2.h"
#include "4_3\4_3.h"

using namespace std;

int main() {
    while(true) {
        cout << "1 Practice 4.1" << "\n";
        cout << "2 Practice 4.2" << "\n";
        cout << "3 Practice 4.3" << "\n";
        cout << "4 Exit" << "\n";
        cout << "Moi nhap lenh " << "\n";
        int t;
        cin >> t;
        if(t == 1) {
            proc1();
            cout << "\n";
        }
        if(t == 2) {
            proc2();
            cout << "\n";
        }
        if(t == 3) {
            proc3();
            cout << "\n";
        }
        if(t == 4) exit(0);
        cout << "\n";
    }
   
}