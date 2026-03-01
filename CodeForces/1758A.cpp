#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    string a = s;
    reverse(s.begin(),s.end());
    cout << a << s <<'\n';
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