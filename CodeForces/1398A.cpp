#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];

    }
    (a[n - 1] >= a[0] + a[1])?cout << 1 << " " << 2 << " " << n << endl:cout << -1 << endl; 
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