#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x,y;cin >> x >> y;//just use stl func dude :D
    cout << min(x,y) << " " << max(x,y) << '\n';
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