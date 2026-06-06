#include <bits/stdc++.h>
#define int long long
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int mn = 2e18;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }

    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == mn) cnt++;
    }

    if (cnt >= 2) {
        cout << "YES\n";
        return;
    }

    int g = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > mn && a[i] % mn == 0) {
            g = gcd(g, a[i]);
        }
    }

    if (g == mn) cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}