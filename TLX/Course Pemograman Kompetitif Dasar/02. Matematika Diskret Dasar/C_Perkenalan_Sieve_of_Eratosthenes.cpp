#include <bits/stdc++.h>
using namespace std;
const int n = 1000000;
vector <bool>sieve(n,true);

vector <int> banyak_prima;
void isi_prima(){
    sieve[0] = false;
    sieve[1] = true;
    for(int i = 2;i * i <= n;i++){
        if(sieve[i]){
            for(int p = i * i;p <= n;p += i){
                sieve[p] = false;
            }
        }
    }
    for(int i = 0;i < sieve.size();i++){
        if(sieve[i])banyak_prima.push_back(i);
    }
}

void solve(){
    int k;cin >> k;
    cout << banyak_prima[k] << '\n';
}
int main(){
    isi_prima();
    int t;cin >> t;
    while(t--){
        solve();
    }
    return 0;
}