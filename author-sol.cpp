#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long x1, x2;
		int p1, p2;
		cin >> x1 >> p1 >> x2 >> p2;
		// subtract the minimum exponent from the exponents (cut down the ratio)
		int mn = min(p1, p2);
		p1 -= mn;
		p2 -= mn;
		char ans = '=';
		// one of the exponents will become 0
		// however, if one of the exponents is still greater than or equal to 7,
		// then declare the corresponding number as the answer since we cannot apply
		// multiplication in this number (because it would overflow the data type)
		// if both of the exponents is less than 7, then we can compare the numbers normally
		if (p1 >= 7) {
			ans = '>';
		} else if (p2 >= 7) {
			ans = '<';
		} else {
			for (int i = 0; i < p1; i++) {
				x1 *= 10;
			}
			for (int i = 0; i < p2; i++) {
				x2 *= 10;
			}
			if (x1 > x2) {
				ans = '>';
			} else if (x1 < x2) {
				ans = '<';
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
