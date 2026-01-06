#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int a, b = n % 10;
    n /= 10;
    a = n;
    cout << a + b << endl;
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