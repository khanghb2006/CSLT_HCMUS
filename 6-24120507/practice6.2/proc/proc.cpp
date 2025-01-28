#include<iostream>
#include<stdio.h>
#include<string>

#include "proc.h"

using namespace std;

void input(string &s) {
    cout << "Enter S = " << "\n";
    getline(cin,s);
}

void output(string &s) {
    int cnt[200],ascii[200];
    for (int i = 0; i < 200; i++) cnt[i] = 0,ascii[i] = 0;
    for (char x : s) {
        int idx = x;
        if(34 <= idx && idx <= 127) {
            cnt[idx]++;
            ascii[idx] = idx;
        }
        // cout << idx << " ";
    }
    for (int i = 34; i <= 127; i++)
    for (int j = i + 1; j <= 127; j++)
        if(cnt[i] < cnt[j]) {
            int t1 = cnt[i];
            int t2 = ascii[i];
            cnt[i] = cnt[j];
            ascii[i] = ascii[j];
            cnt[j] = t1;
            ascii[j] = t2;
        }
    int c = 0;
    for (int i = 34; i <= 127; i++) {
        if(!cnt[i]) continue;
        if(cnt[i] != c) {
            //if(ascii[i])
            if(i != 34) cout << "\n";
            cout << cnt[i] << ": ";
            cout << char(ascii[i]);
        }
        else {
            cout << ' ';
            cout << char(ascii[i]);
        }
        c = cnt[i];
    }
}