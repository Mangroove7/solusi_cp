#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n,k;cin >> n >> k;
    set <int> cek;
    int tambah_k = 0;
    int tambah_angka = 0;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        if(x == k)tambah_k++;
        else cek.insert(x);
    }
    for (int i = 0; i < k; i++) {
        if(cek.find(i) == cek.end())tambah_angka++;
    }
    cout << max(tambah_k,tambah_angka) << endl;
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