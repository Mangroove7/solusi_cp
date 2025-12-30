#include <bits/stdc++.h>
using namespace std;

void solve() {

    long long n, k; cin >> n >> k;
    cout << ((n % 2 != 0 && k % 2 == 0) ? "NO" : "YES") << endl;
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