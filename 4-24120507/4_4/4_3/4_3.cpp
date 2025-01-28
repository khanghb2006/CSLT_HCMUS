#include<iostream>
#include<math.h>
#include<stdio.h>
#include<sstream>
#include"4_3.h"

using namespace std;

void proc3() {
    char temp[1005];
    double a,b,c;
	do {
		std :: cout << "Enter 3 positive real numbers = ";
		std :: cin.getline(temp,1000);
	}while(!(std :: stringstream(temp) >> a >> b >> c && a > 0 && b > 0 && c > 0));
	bool right = false,isosceles = false;
	if(a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
		right = true;
	if(a == b && b == c) cout << "Equilteral";
	else {
		if(a == b || b == c || c == a) isosceles = true;
		if(right && isosceles) cout << "Right-isosceles";
		else if(right) cout << "right";
		else if(isosceles) cout << "isosceles";
		else cout << "normal";
	}
}