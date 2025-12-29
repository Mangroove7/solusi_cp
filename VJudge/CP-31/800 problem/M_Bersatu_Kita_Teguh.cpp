#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a.begin(), a.end());

    // Strategic check: if the first and last are the same, the whole array is uniform
    if (a[0] == a[n - 1]) {
        cout << -1 << "\n";
        return;
    }

    vector<int> b, c;
    int max_val = a[n - 1];

    // Distribute based on value, not by erasing memory
    for (int x : a) {
        if (x == max_val) c.push_back(x);
        else b.push_back(x);
    }

    // Output sizes and elements
    cout << b.size() << " " << c.size() << "\n";
    for (int i = 0; i < b.size(); i++) cout << b[i] << (i == b.size() - 1 ? "" : " ");
    cout << "\n";
    for (int i = 0; i < c.size(); i++) cout << c[i] << (i == c.size() - 1 ? "" : " ");
    cout << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}