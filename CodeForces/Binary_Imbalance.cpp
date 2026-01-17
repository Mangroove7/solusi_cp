#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    string s; cin >> s;
    
    // yet another solution wkwkwk :v
    bool all_one = true;
    for(char c : s) {
        if(c == '0') {
            all_one = false;
            break;
        }
    }

    if(all_one) cout << "NO\n";
    else cout << "YES\n";
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) solve();
}