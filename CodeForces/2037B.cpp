#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;
    vector<int> a(k);
    
    // Gunakan vector sebagai pengganti map untuk menghitung frekuensi
    // Ukuran k+1 atau sesuai batas maksimum a[i] di soal
    vector<int> freq(k + 1, 0); 
    
    for (int i = 0; i < k; i++) {
        cin >> a[i];
        if (a[i] <= k) { // Safety check agar tidak index out of bounds
            freq[a[i]]++;
        }
    }

    int target = k - 2;

    // Cari pembagi dari target
    for (int i = 0; i < k; i++) {
        int f1 = a[i];
        
        // Cek apakah f1 adalah pembagi dari target
        if (target % f1 == 0) {
            int f2 = target / f1;
            
            // Pastikan f2 tidak lebih besar dari batas array freq
            if (f2 <= k) {
                // Kasus 1: f1 dan f2 adalah angka yang berbeda
                if (f1 != f2 && freq[f2] > 0) {
                    cout << f1 << " " << f2 << "\n";
                    return;
                }
                // Kasus 2: f1 dan f2 adalah angka yang sama (misal 2x2=4)
                // Kita butuh minimal dua angka tersebut di dalam array
                else if (f1 == f2 && freq[f1] >= 2) {
                    cout << f1 << " " << f2 << "\n";
                    return;
                }
            }
        }
    }
}

int main() {
    // Optimasi I/O
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}