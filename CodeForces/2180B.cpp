#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <string> a;
    for (int i = 0; i < n; i++) {
        string x;cin >> x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
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