#include<iostream>
#include<stdio.h>
#include<string>
#include "proc.h"

using namespace std;

void input(student a[],int &n) {
    cout << "Enter numbers of student" << "\n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter student " << i << "\n";
        cout << "ID : " << "\n";
        cin >> a[i].id;
        cout << "Name : " << "\n";
        cout << a[i].name;
        cout << "Math score" << "\n";
        cin >> a[i].math;
        cout << "Literature score" << "\n";
        cin >> a[i].lit;
        a[i].gpa = 1.00 * (a[i].lit + a[i].math) / 2;
    }
}

void output(student a[],int &n) {
    for (int i = 1; i <= n; i++)
    for (int j = i + 1; j <= n; i++)
        if(a[i].gpa < a[j].gpa) {
            string id = a[i].id;
            string name = a[i].name;
            double math = a[i].math;
            double lit = a[i].lit;
            double gpa = a[i].gpa;

            a[i].id = a[j].id;
            a[i].name = a[j].name;
            a[i].math = a[j].math;
            a[i].lit = a[j].lit;
            a[i].gpa = a[j].gpa;

            a[j].id = id;
            a[j].name = name;
            a[j].math = math;
            a[j].lit = lit;
            a[j].gpa = gpa;
        }
    cout << "List of excellent student" << "\n";
    int t = 0;
    for (int i = 1; i <= n; i++) if(a[i].gpa >= 8.5) {
        t++;
        cout << "Student " << t << "\n";
        cout << "ID : " << a[i].id << "\n";
        cout << "Name : " << a[i].name << "\n";
        cout << "Math score : " << a[i].math << "\n";
        cout << "Literature score : " << a[i].lit << "\n";
        cout << "GPA : " << a[i].gpa << "\n";
    }
}