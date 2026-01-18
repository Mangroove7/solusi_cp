#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,f,a,b;cin >> n >> f >> a >> b;
    vector <int> m(n + 1);
    m.push_back(0);
    for (int i = 1; i < n + 1; i++) {
        cin >> m[i];
    }
    for (int i = 0; i < n; i++) {
        int t = abs(m[i + 1] - m[i]);
        f -= min(a * t,b);
    }
    (f > 0)?cout << "YES\n":cout << "NO\n";
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