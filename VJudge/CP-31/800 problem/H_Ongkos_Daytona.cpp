#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    (find(a.begin(),a.end(),k) != a.end())?cout << "YES" << '\n':cout << "NO\n";
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