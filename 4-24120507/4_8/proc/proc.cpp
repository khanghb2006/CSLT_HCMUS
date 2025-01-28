#include<stdio.h>
#include<iostream>
#include<math.h>
#include "proc.h"

using namespace std;

struct date {
    int day,month,year;
    

    bool check(date a,date b) {
        bool ok = false;
        if(a.year < b.year) ok = true;
        else if(a.year == b.year) {
            if(a.month < b.month) ok = true;
            else if(a.month == b.month) ok |= (a.day < b.day);
        }
        return ok;
    }

    bool ismonth_30(int x) {
        if(x == 4 || x == 6 || x == 9 || x == 11) return true;
        return false;
    }
    
    bool ismonth_31(int x) {
        if(x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12)
            return true;
        return false;
    }

    date tomorrow(date a) {
        date c;
        if(a.month == 2) {
            if((a.year % 4 == 0 && a.day + 1 > 29) || (a.year % 4 != 0 && a.day + 1 > 28)) {
                c.day = 1;
                c.month = 3;
                c.year = year;
            }
            else {
                c.day = a.day + 1;
                c.month = a.month;
                c.year = a.year;
            }
        }
        else if(ismonth_30(a.month)) {
            if(a.day + 1 > 30) {
                c.day = 1;
                c.month = a.month + 1;
                c.year = a.year;
            }
            else {
                c.day = a.day + 1;
                c.month = a.month;
                c.year = a.year;
            }
        }
        else {
            if(a.month == 12) {
                if(a.day + 1 > 31) {
                    c.day = 1;
                    c.month = 1;
                    c.year = a.year + 1;
                }
                else {
                    c.day = a.day + 1;
                    c.month = a.month;
                    c.year = a.year;
                }
            }
            else {
                if(a.day + 1 > 31) {
                    c.day = 1;
                    c.month = a.month + 1;
                    c.year = a.year;
                }
                else {
                    c.day = a.day + 1;
                    c.month = a.month;
                    c.year = a.year;
                }
            }
        }
        return c;
    }

    date yesterday(date a) {
        date c;
        if(a.day - 1 < 0) {
            if(a.month == 3) {
                c.month = 2;
                c.year = a.year;
                c.day = (a.year % 4 == 0 ? 29 : 28);
            }
            else {
                c.day = (ismonth_30(a.month) ? 31 : 30);
                c.month = a.month - 1;
                c.year = a.year;
            }
        }
        else {
            c.day = a.day - 1;
            c.month = a.month;
            c.year = a.year;
        }
    }
}D;

void proc() {
    cout << "Enter 2 date = ";
    date a,b;
    cin >> a.day >> a.month >> a.year;
    cin >> b.day >> b.month >> b.year;
    if(D.check(a,b)) cout << "Date1 is latest than Date2 " << "\n";
    else cout << "Date2 is lastest than Date1 " << "\n";
    
    cout << "Tomorrow date of Date1 ";
    date t1 = D.tomorrow(a);
    cout << "Day :" << t1.day << " month : " << t1.month << " year : " << t1.year << "\n";

    cout << "Yesterday date of Date2 ";
    date t2 = D.yesterday(b);
    cout << "Day :" << t2.day << " month : " << t2.month << " year : " << t2.year << "\n";
}