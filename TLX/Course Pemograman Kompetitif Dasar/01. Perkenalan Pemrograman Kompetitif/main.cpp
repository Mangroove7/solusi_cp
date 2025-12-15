#include <bits/stdc++.h>
using namespace std;

int main() {
    int cnt = 0;
    for(int i = 1; i <= 100; i++) {
        // PROPOSISI
        bool P = (i % 5 == 0);          // Kelipatan 5
        bool Q = ((i + 1) % 2 == 0);    // i+1 Genap (berarti i Ganjil)
        bool R = (i % 2 == 0);          // Kelipatan 2 (Genap)
        bool S = ((i + 1) % 3 == 0);    // i+1 habis dibagi 3

        // SYARAT 1: Bi-implikasi (P <-> Q)
        // Di C++, (A == B) adalah ekuivalen logika
        bool syarat1 = (P == Q);

        // SYARAT 2: Implikasi (R -> S)
        // Hukum Implikasi: (!R atau S)
        bool syarat2 = (!R || S);

        // KEPUTUSAN FINAL
        // Bilangan harus memenuhi KEDUA syarat logic
        if (syarat1 && syarat2) {
            cnt++;
            // Uncomment baris bawah untuk melihat bilangan apa saja
            // cout << i << " "; 
        }
    }
    
    cout << endl << "Total: " << cnt << endl;
    return 0;
}