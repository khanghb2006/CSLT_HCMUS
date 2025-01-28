#include<bits/stdc++.h>

using namespace std;

int main() {
	int t = 0;
	for (int x = 1; x <= 9; x++)
	for (int y = 0; y <= 9; y++) if(x + y < 10) {
		t++;
		cout << t << ": " << x << x + y << y << "\n";
	}
}