#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int res = n + 2 * (n / 2 + n / 3);
    cout << res << endl;
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