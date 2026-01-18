#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int res = 0;
    for (int i = 1; i <= n; i++) {
        if(n % i != 0)break;
        res++;
    }
    cout << res << endl;
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