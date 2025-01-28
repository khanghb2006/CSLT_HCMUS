#include<iostream>
#include<math.h>
#include<stdio.h>
#include<sstream>
#include"proc1.h"

using namespace std;

struct fraction {
    
    int gcd(int x,int y) {
        while(x != y) {
            if(x > y) x -= y;
            else y -= x;
        }
        return x;
    }

    int lcm(int x,int y) {
        return x * y / gcd(x,y);
    }

    int x,y;

    fraction operator + (const fraction & other) {
        fraction c;
        int LCM = lcm(y,other.y);
        c.x = x * (LCM / y) + other.x * (LCM / other.y);
        c.y = LCM;
        int Div = gcd(c.x,c.y);
        c.x /= Div;
        c.y /= Div;
        return c;
    }

    fraction operator * (const fraction & other) {
        fraction c;
        c.x = x * other.x;
        c.y = y * other.y;
        int Div = gcd(c.x,c.y);
        c.x /= Div;
        c.y /= Div;
        return c;
    }

    fraction operator - (const fraction  & other) {
        fraction c;
        int LCM = lcm(y,other.y);
        c.x = x * (LCM / y) + other.x * (LCM / other.y);
        c.y = LCM;
        int Div = gcd(c.x,c.y);
        c.x /= Div;
        c.y /= Div;
        return c;
    }
}frac;

void proc() {
    fraction a,b;
    cout << "Enter fraction 1 = ";
    cin >> a.x >> a.y;
    cout << "Enter fraction 2 = ";
    cin >> b.x >> b.y;

    if(!a.y || !b.y) {
        cout << "Error";
        return;
    }

    fraction sum = a + b;
    cout << "Sum of 2 fractions = ";
    if(sum.y == 1) cout << sum.x << "\n";
    else cout << sum.x << '|' << sum.y << "\n";

    fraction mul = a * b;
    cout << "Multiply of 2 fractions = ";
    if(mul.y == 1) cout << mul.x << "\n";
    else cout << mul.x << '|' << mul.y << "\n";

    cout << "Inverse fraction 1 = " << a.y << '|' << a.x << "\n";
    cout << "Inverse fraction 2 = " << b.y << '|' << b.x << "\n";

    fraction rec = a - b;
    cout << "Reduce of 2 fractions = ";
    if(rec.y == 1) cout << rec.x << "\n";
    else cout << rec.x << '|' << rec.y << "\n";
}