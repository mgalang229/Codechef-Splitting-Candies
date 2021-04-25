#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		long long n, k;
		cin >> n >> k;
		if (k == 0) {
			// if 'k' is equal to 0, then the teachers does not need
			// to divide the candies, so the teacher will receive
			// all 'n' candies
			cout << 0 << " " << n;
		} else {
			// otherwise, print the quotient of 'n' and 'k' (number of
			// candies per student) and the remainder of 'n' and 'k' 
			// (the remaining candies that the teacher will receive)
			cout << n / k << " " << n % k;
		}
		cout << '\n';
	}
	return 0;
}
