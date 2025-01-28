#include<iostream>
#include<stdio.h>
#include<math.h>
#include"proc.h"

using namespace std;

struct Point {
    int x,y;

    int sqr(int x) {
        return x * x;
    }

    int gcd(int x,int y) {
        while(x != y) {
            if(x > y) x -= y;
            else y -= x;
        }
        return x;
    }

    double dist (Point a,Point b) {
        return sqrt(sqr(b.x - a.x) + sqr(b.y - a.y));
    }
    
    double perimeter(Point a,Point b,Point c) {
        double A = dist(a,b);
        double B = dist(b,c);
        double C = dist(c,a);
        return A + B + C;
    }
    
    void centroid (Point a,Point b,Point c) {
        Point cen;
        cen.x = a.x + b.x + c.x;
        cen.y = a.y + b.y + c.y;
        int Div = gcd(cen.x,3);
        if(Div == 3) cout << cen.x << " ";
        else cout << cen.x << '|' << 3 << " ";
        Div = gcd(cen.y,3);
        if(Div == 3) cout << cen.y << " ";
        else cout << cen.y << '|' << 3 << " ";
    }
}p;

void proc() {
    cout << "3 Point ";
    Point a,b,c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cout << "Triangle Permeter = " << "\n";
    cout << p.perimeter(a,b,c) << "\n";
    cout << "Triangle Centroid : " << " ";
    p.centroid(a,b,c);
}