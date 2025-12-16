#include <bits/stdc++.h>
using namespace std;

inline void solve() {
    int n;cin >> n;
    for (int x = 1; x <= 20; x++) {

	    for (int y = 1; y <= 20; y++) {
	        if (x + y >= n || x == y) continue;
	        int z = n - x - y;
	        if (z == x || z == y) continue;
	        if (x % 3 == 0 || y % 3 == 0 || z % 3 == 0) {
	            continue;
	        }
	        cout << "YES\n";
	        cout << x << ' ' << y << ' ' << z << endl;
	        return;
	    }
	}
	cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}