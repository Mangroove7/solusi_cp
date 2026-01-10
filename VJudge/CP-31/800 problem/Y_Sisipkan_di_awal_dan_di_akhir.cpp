#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if((s[i] == '0' && s[n - 1 - i] == '1') || (s[i] == '1' && s[n - 1 -i] == '0'))continue;
        cnt++;
    }
    cout << cnt << endl;
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