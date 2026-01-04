#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    //buat string
    string math;cin >> math;
    //perhatikan tiap angka berada pada index genap di string math
    //maka kita perlu ekstrak angka pada indeks ganjil
    //buat vektor untuk menampung angka hasil ekstrak
    vector <int> angka;
    for (int i = 0; i < math.size(); i++) {
        if(i % 2 == 0){
            //ekstrak karakter huruf dengan mengurangkannya dengan karakter '0' sebagai representasi ASCII
            //push back ke vec int otomatis typecasting char ASCII menjadi int dari angka ASCII
            angka.push_back(math[i] - '0');

        }
    }
    //sort vektor angka
    sort(angka.begin(),angka.end());
    for (int i = 0; i < angka.size(); i++) {
        //format sesuai soal
        (i < angka.size() - 1)?cout << angka[i] << '+':cout << angka[i];
    }
    return 0;
}