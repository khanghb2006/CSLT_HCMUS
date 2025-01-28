#include<iostream>
#include<stdio.h>
#include<string>
#include<fstream>

using namespace std;

/*
65 90
33 58
*/

bool isWord(char c) {
	int p = c - 32;
	// cout << 'a' - 32 << " " << 'z' - 32 << "\n";
	// cout << 'A' - 32 << " " << 'Z' - 32 << "\n";
	// cout << p << "\n";
	if(65 <= p && p <= 90) return true;
	if(33 <= p && p <= 58) return true;
	return false;
}

bool isNum(char c) {
	int p = c - 32;
	// cout << '0' - 32 << " " << '9' - 32 << "\n";
	if(16 <= p && p <= 25) return true;
	return false;
}

int main() {
	fstream f("INPUT.TXT",ios::in);
	if(!f) {
		cout << "Error" << "\n";
		exit(0);
	}
	char s;
	int num = 0,word = 0;
	// cout << isNum('1') << "\n";
	char c = ' ';
	while(f.get(s)) {
		// cout << s << "\n";
			if(isNum(s) && !isNum(c)) num++;
			if(isWord(s) && !isWord(c)) word++;
			c = s;
	}
	cout << "Word count: " << word << "\n";
	cout << "Number count: " << num << "\n";
}