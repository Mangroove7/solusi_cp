//soal IMPACT 5.0 bagian 1
//Soal ini meminta mengecek apakah dari operasi xor 1 xor 2 xor ... xor a_i memiliki hasil 1 / 0
//soal ini dapat kita observasi menurut polanya
// 1 = 1
// a = 2 1 xor 10 = 3 (N + 1)
//a = 3 1 xor 10 xor 11 = 0 (valid)
//a = 4 1 xor 10 xor 11 xor 100 = 4 (N)
//a = 5 ... xor 100 xor 101 = 1 (valid)
//dst .. kita akan mendapat pola bahwa apabila a_i dibagi 4 bersisa 3 pasti benar menghasilkan 0 atau bersisa 1 juga benar menghasilkan 1
// sehingga solusinya (a_i % 4 == 3 || a_i % 4 == 1) maka pasti valid(1 / 0) selainnya pasti tidak

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    for(int i = 0;i < n;i++){
        int a;cin >> a;
        (a % 4 == 3 || a % 4 == 1)?cout << "YA\n":cout << "TIDAK\n";
    }

    return 0;
}

//Kompleksitas Waktu (avg) : O(1)
//kompleksitas Memori (avg) : O(1)