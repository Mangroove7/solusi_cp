#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n, k; 
    cin >> n >> k;
    vector<pair<int, int>> a(n);
    
    for (int i = 0; i < n; i++) {
        int hp; cin >> hp;
        int res = hp % k;
        if (res == 0) res = k; 
        
        a[i] = {res, i + 1}; 
    }

    sort(a.begin(), a.end(), [](const pair<int, int>& x, const pair<int, int>& y) {
        if (x.first != y.first) {
            return x.first > y.first; 
        }
        return x.second < y.second; 
    });

    for (int i = 0; i < n; i++) {
        cout << a[i].second << ' ';
    }
    cout << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) solve();
    return 0;
}
