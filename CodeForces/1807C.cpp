#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    string s;cin >> s;
    
    vector <int> seen(26,-1);
    for (int i = 0; i < n; i++) {
        int curr = s[i] - 'a';
        int parity = i % 2;
        if(seen[curr] == -1){
            seen[curr] = parity;
        }else{
            if(seen[curr] != parity){
                cout << "NO\n";
                return;
            }
            
        }
    }
    cout << "YES\n";
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