#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector <int> basis;
    vector <int> pangkat;
    for(long long i = 2;i * i <= n;i++){
        if(n % i == 0){
            int cnt = 0;
            while(n % i == 0){
                n /= i;
                cnt++;
            }
            basis.push_back(i);
            pangkat.push_back(cnt);
        }
    }
    if(n > 1){
        basis.push_back(n);
        pangkat.push_back(1);
    }
    
    for(int i = 0;i < basis.size();i++){
        if(pangkat[i] != 1){
            cout << basis[i] << "^" << pangkat[i];
        }
        else if(pangkat[i] == 1)cout << basis[i];
        if (i < basis.size() - 1) {
            cout << " x ";
            }
    }
    return 0;
}