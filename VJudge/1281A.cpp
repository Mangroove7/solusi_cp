#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    if(s.find("po") == s.size() - 2)cout << "FILIPINO\n";
    else if(s.find("desu") == s.size() - 4 || s.find("masu") == s.size() - 4)cout << "JAPANESE\n";
    else cout << "KOREAN\n";
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