#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int k,last_x;cin >> k >> last_x;
    cout << last_x * (2 << (k-1)) << '\n';
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}