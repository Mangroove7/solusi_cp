#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    (s.size() > 10)?cout << s[0] << s.size()-2 << s[s.size()-1] << endl:cout << s << endl;
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