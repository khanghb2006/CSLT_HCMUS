#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>
#include<cctype>
#include<math.h>
#include<iomanip>
#include<fstream>

using namespace std;

int const mxN = 1e6 + 7;

struct Student {
	string id;
	string Name;
	float gpa;
}student[mxN];

int main() {
	fstream f("STUDENT.TXT",ios::in);
	fstream F("GPA.TXT",ios::out);

	if(!f) {
		cout << "Error" << "\n";
		exit(0);
	}
	string s,t;
	int n = 0;
	while(getline(f,s)) {
		// cout << s << "\n";
		n++;
		bool ok = false;
		char c = ' ';
		// cout << s << "\n";
		for (char x : s) {
			if(x == ' ' && c == ' ') continue;
			if(x == '|') {
				ok = true;
				c = x;
				continue;
			}
			if(ok) student[n].id += x;
			else {
				if(c == ' ' && x == ' ') continue;
				char C;
				if(c == '|' || c == ' ') {
					C = toupper(x);
					// cout << C << "\n";
				}else C = x;
				student[n].Name += C;
			}
			c = x;
		}
		// cout << student[n].Name << "\n";
		// c = ' ';
		// for (char x : t) {
		// 	if(c == ' ' && x == ' ') continue;

		// }
		getline(f,t);
		int T = 0;
		float a;
		stringstream ss(t);
		while(ss >> a) {
			T++;
			student[n].gpa += a;
		}
		student[n].gpa /= T;
	}
	for (int i = 1; i <= n; i++)
	for (int j = i + 1; j <= n; j++) 
		if(student[i].gpa < student[j].gpa) {
			string id = student[i].id;
			string Name = student[i].Name;
			float gpa = student[i].gpa;

			student[i].id = student[j].id;
			student[i].Name = student[j].Name;
			student[i].gpa = student[j].gpa;

			student[j].id = id;
			student[j].Name = Name;
			student[j].gpa = gpa;
		}
	for (int i = 1; i <= n; i++) {
		F << student[i].id << '|';
		F << student[i].Name << '|';
		F << setprecision(2) << student[i].gpa << "\n";
	}
}