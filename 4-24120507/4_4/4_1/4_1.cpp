#include<iostream>
#include<math.h>
#include<stdio.h>
#include<sstream>
#include "4_1.h"

using namespace std;


void proc1() {
    int n;
    char temp[1005];
    do {
		std :: cout << "Enter a positive number  = ";
		std :: cin.getline(temp,1000);
	}while(!(std :: stringstream(temp) >> n && n > 0));
    int t = 0;
    // cout << n << "\n";
    for (int i = 2; i <= n; i++) {
        bool prime = true;
        for (int j = 2; j * j <= i; j++)  if(i % j == 0) prime = false;
        if(prime) {
            t++;
            cout << "#" << t << " = " << i << "\n";
        }
    }
    if(t == 1) cout << "There is 1 prime number." << "\n";
    else cout << "There are " << t << " prime numbers." << "\n";
}