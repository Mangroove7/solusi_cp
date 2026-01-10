#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int operations = 0;
    // Cukup iterasi sekali dari awal sampai akhir - 1
    for (int i = 0; i < n - 1; i++) {
        // Cek apakah elemen saat ini dan selanjutnya punya paritas sama
        // (Ganjil & Ganjil) ATAU (Genap & Genap)
        if ((a[i] % 2) == (a[i+1] % 2)) {
            operations++;
        }
    }
    cout << operations << endl;
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