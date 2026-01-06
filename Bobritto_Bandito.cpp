#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m,l,r;cin >> n >> m >> l >> r;
    int r_baru;
    (m > r)?r_baru = r:r_baru = m;
    int l_baru = r_baru - m;
    cout << l_baru << " " << r_baru << endl;
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