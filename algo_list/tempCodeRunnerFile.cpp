#include <bits/stdc++.h>
using namespace std;
bool cekprima(int n){
    if (n < 2)return false;
    for(int i = 2; i * i <= n;i++){
        if (n % i == 0)return false;
    }
    return true;
}
int main(){
    int n;cin >> n;
    vector <bool> faktor(n + 1,true);
    vector<int> jlh;
    set<int> prim;
    
    int cnt = 0;
    while(n % 2 == 0){
        prim.insert(2);
        n /= 2;
        cnt++;
    }
    jlh.push_back(cnt);
    for (int i = 3; i <= n; i++) {
        int cnt = 0;
        if (cekprima(i)){
            
            while(n % i == 0){
                prim.insert(i);
                n /= i;
                cnt++;
        }
        if(cnt != 0)jlh.push_back(cnt);
    }
    }
    vector <int> prim_baru;
    for(auto x : prim){
        prim_baru.push_back(x);
    }
    for (int i = 0; i < prim_baru.size() - 1; i++) {
        cout << prim_baru[i] << "^" << jlh[i] << " x ";
    }
    cout << prim_baru[prim_baru.size()-1] << "^" << jlh[prim_baru.size()-1];
    return 0;
}