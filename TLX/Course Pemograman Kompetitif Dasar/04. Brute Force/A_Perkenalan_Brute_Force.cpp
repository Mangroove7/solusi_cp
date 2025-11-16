#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b;cin >> a >> b;
    bool cek = false;
    // cek ukuran string a apakah lebih 1 karakter dari b
    if (a.size() == b.size()+1){
        //cek 1-per-1 jika kita pangkas suatu karakter apakah string a == b
        for(int i = 0;i < a.size();i++){
            if((a.substr(0,i) + a.substr(i+1)) == b){
                cek = true;
                break;
            }
        }
    }
    
    (cek)?cout << "Tentu saja bisa!\n":cout << "Wah, tidak bisa :(\n";
    return 0;
}