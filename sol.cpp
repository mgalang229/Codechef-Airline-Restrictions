#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n = 3;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int d, e;
		cin >> d >> e;
		// try all possible combinations
		bool checker = false;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				for (int k = 0; k < n; k++) {
					if (i != j && j != k && i != k && a[i] + a[j] <= d && a[k] <= e) {
						checker = true;
						break;
					}
				}
				if (checker) {
					break;
				}
			}
			if (checker) {
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
