#include<bits/stdc++.h>

using namespace std;

int main() {
	int money;
	cout << "Exchange money = ";
	cin >> money;
	int max_1000 = money / 1000;
	int max_5000 = money / 5000;
	int max_10000 = money / 10000;
	int max_20000 = money / 20000;
	int money_notes = 1e9,remain = 1e9;
	int note1000 = 0,note5000 = 0,note10000 = 0,note20000 = 0;
	for (int x = 0; x <= max_1000; x++)
	for (int y = 0; y <= max_5000; y++)
	for (int z = 0; z <= max_10000; z++)
	for (int t = 0; t <= max_20000; t++) {
		int sum = x * 1000 + y * 5000 + z * 10000 + t * 20000;
		if(sum > money) continue;
		if(sum == money) {
			cout << "Note 20000: " << t << "\n";
			cout << "Note 10000: " << z << "\n";
			cout << "Note 5000: " << y << "\n";
			cout << "Note 1000: " << x << "\n";
			cout << "Remain money = " << 0 << "\n";
		}
		else {
			int dis = money - sum;
			if(dis < remain) {
				remain = dis;
				money_notes = x + y + z + t;
				note1000 = x;
				note5000 = y;
				note10000 = z;
				note20000 = t;
			}
			else if(dis == remain) {
				if(money_notes > x + y + z + t) {
					money_notes = x + y + z + t;
					note1000 = x;
					note5000 = y;
					note10000 = z;
					note20000 = t;
				}
			}
		}
	}
	cout << "Note 20000: " << note20000 << "\n";
	cout << "Note 10000: " << note10000 << "\n";
	cout << "Note 5000: " << note5000 << "\n";
	cout << "Note 1000: " << note1000 << "\n";
	cout << "Remain money = " << remain << "\n";
}