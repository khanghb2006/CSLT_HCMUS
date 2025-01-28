#include<iostream>
#include<stdio.h>
#include<string>
#include<ctype.h>
#include<fstream>

using namespace std;

int ADD(int x,int y) {return x + y;}
int MINUS(int x,int y) {return x - y;}
int MUL(int x,int y) {return x * y;}
int DIV(int x,int y) {return x / y;}

bool isNum(char c) {
	if(c == '0' || c == '5') return true;
	if(c == '1' || c == '6') return true;
	if(c == '2' || c == '7') return true;
	if(c == '3' || c == '8') return true;
	if(c == '4' || c == '9') return true;
	return false;
}

bool isOperation(char c) {
	if(c == '+' || c == '-') return true;
	if(c == '*' || c == '/') return true;
	return false;
}

int main() {
	fstream f("OPERATION.TXT",ios::in);
	fstream F("RESULT.TXT",ios::out);
	if(!f) {
		cout << "Error" << "\n";
		exit(0);
	}
	string s;
	while(getline(f,s)) {
		int a = 0,b = 0;
		char op;
		bool error = false;
		bool have_a = false,have_b = false,have_op = false,can = true;
		for (int i = 0; i < (int) s.size(); i++) {
			if(!isNum(s[i]) && !isOperation(s[i])) continue;
			if(isOperation(s[i])) {
				if(have_op) {
					error = true;
					break;
				}
				have_op = true;
				op = s[i];
			}
			if(isNum(s[i])) {
				// if(have_a && have_op && have_b) continue;
				if(!can) {
					error = true;
					continue;
				}
				if(!have_op) {
					have_a = true;
					a = a * 10 + (s[i] - '0');
				}
				else {
					have_b = true;
					b = b * 10 + (s[i] - '0');
				}
			}
			if(!isNum(s[i]) && have_op && have_a && have_b)
				can = false;
		}
		if(!have_a || !have_b || !have_op) F << "Error" << "\n";
		else if(error) F << "Error" << "\n";
		else {
			// cerr << a << " " << b << "\n";
			if(op == '+') F << ADD(a,b) << "\n";
			if(op == '-') F << MINUS(a,b) << "\n";
			if(op == '*') F << MUL(a,b) << "\n";
			if(op == '/') {
				if(!b) F << "Divided by zero" << "\n";
				else F << DIV(a,b) << "\n";
			}
		}
	}
	f.close();
	F.close();
}