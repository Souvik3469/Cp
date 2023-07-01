#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n; cin >> n;
	vector<int> a(n), b(n);
	for (int &x: a) cin >> x;
	for (int &x: b) cin >> x;
	reverse(begin(a), end(a));
	reverse(begin(b), end(b));

	int i = 0;
	for (int x: a) {
		if (b[i] == x) i++;
	}
	cout << n-i << '\n';
}

int main() {
	int tc; cin >> tc;
	while (tc--) solve();
}
