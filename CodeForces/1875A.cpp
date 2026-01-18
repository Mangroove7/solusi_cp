#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a,b,n;cin >> a >> b >> n;
    int res = b;
    
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        res += min(x,a-1);
    }
    
    cout << res << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}