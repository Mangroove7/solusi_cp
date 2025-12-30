#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, m, a;
    cin >> n >> m >> a;

    // Kita hitung TERPISAH dan simpan di variabel.
    // Ini memaksa komputer menyelesaikan pembagian DULU.
    long long tinggi = (n + a - 1) / a;
    long long lebar = (m + a - 1) / a;

    // Baru dikalikan
    cout << tinggi * lebar << endl;

    return 0;
}