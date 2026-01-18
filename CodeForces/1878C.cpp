#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n,k,x;cin >> n >> k >> x;
    int sum_all = n * (n + 1) / 2;
    int sum_min = k * (k + 1) / 2;
    int sum_max = sum_all - ((n - k) * (n - k + 1) / 2);
    if(x >= sum_min && x <= sum_max)cout <<"YES\n";
    else cout << "NO\n";
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