#include <bits/stdc++.h>
using namespace std;

void solve() {
    /* pertama kita tahu bahwa tiap bilangan 2^i -> N dipasangkan menjadi setengah-setengah
    dan kita tahu bahwa pasangannya berjumlah n/2 dimana N adalah genap
    untuk solusi optimal kita selalu memasangkan nilai paling maksimum dari deret 2^i yaitu 2^n
    ke deret kecil , dan sisanya yaitu deret besar ialah deret maks kita akan kurangkan
    
    karena setidaknya untuk solusi minimal kita perlu membuat maks >= min (maks sedikit >= dibanding min)
    contoh n = 2 , maka akan terbentuk 2,4 pasangkan 4 sebagai max dan sisanya 2 menjadi min
    maka hasil = 2 */
    int n;cin >> n;
    int maks = (1 << n);
    int min = 0;
    for (int i = 1; i <= n / 2 - 1; i++) {

        maks += (1 << i);
    }
    for (int i = n / 2; i <= n - 1; i++) {
        
        min += (1 << i);

    }
    int sum = maks - min;
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