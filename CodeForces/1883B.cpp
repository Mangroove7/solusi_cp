#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin >> n >> k;
    string s;cin >> s;
    map <char,int> a;
    for(char c : s){
        a[c]++;
    }
    int cnt = 0;
    for(auto p : a){
        if(p.second % 2 == 1)cnt++;
    }
    if(cnt > (k + 1))cout << "NO\n";
    else cout << "YES\n";
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