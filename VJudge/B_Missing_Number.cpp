#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;cin >> n;
    long long S_n = n * (n + 1) / 2;
    long long jumlah_parsial = 0;
    for (long long i = 0; i < n - 1; i++) {
        long long angka;cin >> angka;
        jumlah_parsial += angka;
    }
    long long hasil = S_n - jumlah_parsial;
    cout << hasil << endl;
    return 0;
}