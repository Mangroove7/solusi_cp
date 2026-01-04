#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;cin >> a >> b >> c >> d;
    (a == b && a == c && a == d && b == c && b == d && c == d)?cout <<"YES\n":cout << "NO\n";
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