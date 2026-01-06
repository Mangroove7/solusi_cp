#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a,b,c;cin >> a >> b;
    c = a ^ b;
    cout << c << endl;
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