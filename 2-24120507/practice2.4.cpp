#include<bits/stdc++.h>
using namespace std;
int main() {
	int h1,h2,m1,m2,s1,s2;
	cout << "T1 (hour minute second) ";
	cin >> h1 >> m1 >> s1;
	cout << "T2 (hour minute second) ";
	cin >> h2 >> m2 >> s2;
	if(h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2))
		swap(h1,h2),swap(m1,m2),swap(s1,s2);
	if(s1) {
		m1++;
		if(m1 > 60) m1 -= 60,h1++;
	}
	int ans = s2;
	ans += (60 - s1);
	if(m2 < m1) {
		ans += (60 - m1) * 60;
		ans += m2 * 60;
		ans += (h2 - h1 - 1) * 3600;
	}
	else {
		ans += (m2 - m1) * 60;
		ans += (h2 - h1) * 3600;
	}
	cout << "Distance = " << ans << "\n";
}