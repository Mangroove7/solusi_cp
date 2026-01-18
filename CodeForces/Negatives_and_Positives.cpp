#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int n;cin >> n;
    int minim = 1e9;
    int sum = 0;
    int cnt_odd = 0;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        sum += abs(x);
        if(x < 0)cnt_odd++;
        minim = min(minim,abs(x));
    }
    (cnt_odd % 2 != 0)?cout << sum - 2 * minim << endl:cout << sum << endl;
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