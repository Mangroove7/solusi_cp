#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        int a;cin >> a;
        if(i % 2 == 0)cnt -= a;
        else cnt += a;
    }
    cout << cnt << endl;
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