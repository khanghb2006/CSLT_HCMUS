#include<iostream>
#include<stdio.h>
#include"proc.h"

using namespace std;

void input(date a[],int &n) {
    cout << "Numbers of the day" << "\n";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << "Enter day " << i << " day,month,year" << "\n";
        cin >> a[i].day >> a[i].month >> a[i].year;
    }
}

bool cmp(date a,date b) {
    if(b.year > a.year) return true;
    else if(b.year < a.year) return false;
    else {
        if(b.month > a.month) return true;
        else if(b.month < a.month) return false;
        else {
            if(b.day > a.day) return true;
            else if(b.day < a.day) return false;
        }
    }
    return true;
}

void output(date a[],int &n) {
    for (int i = 1; i <= n; i++)
    for (int j = 1; j <= n; j++) if(cmp(a[i],a[j])) {
        int day = a[i].day;
        int month = a[i].month;
        int year = a[i].year;
        a[i].day = a[j].day;
        a[i].month = a[j].month;
        a[i].year = a[j].year;
        a[j].day = day;
        a[j].month = month;
        a[j].year = year;
    }
    cout << "List of day from the latest date to the oldest one" << "\n";
    for (int i = 1; i <= n; i++) {
        cout << "Date " << i << "\n";
        cout << a[i].day << '/' << a[i].month << '/' << a[i].year << "\n";
    }
}