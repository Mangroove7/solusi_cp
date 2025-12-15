#include <bits/stdc++.h>
using namespace std;

void solve() {
    //solusinya adalah -(jumlah dari efisiensi) dikarenakan
    // misal e_hilang adalah skor yang hilang maka
    //e_1 + e_hilang + ... +  e_n-1 = 0
    // e_hilang = -(e_1 + ... + e_n-1)
    int n;cin >> n;
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        int tim;cin >> tim;
        sum -= tim;
    }
    cout << sum << endl;
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