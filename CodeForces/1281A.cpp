#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    string cek = "";
    for (int i = s.size() - 2; i < s.size(); i++) {
        cek += s[i];
        if(cek == "po"){
            cout << "FILIPINO\n";
            return;
        }
    }
    for (int i = s.size() - 4; i <= s.size(); i++) {
        cek += s[i];
        if(cek == "desu" || cek == "masu"){
            cout << "JAPANESE\n";
            return;
        }
    }
    for (int i = s.size() - 5; i <= s.size(); i++) {
        cek += s[i];
        if(cek == "mnida"){
            cout << "KOREAN\n";
            return;
        }
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