#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >> n;
    vector <int> a(n);
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    int q;cin >> q;
    while(q--){
        int x,y;
        cin >> x >> y;
        auto y_it = upper_bound(a.begin(),a.end(),y);
        auto x_it = upper_bound(a.begin(),a.end(),x);
        int batas_atas = distance(a.begin(),y_it);
        int batas_bawah = distance(a.begin(),x_it);
        int hasil = batas_atas - batas_bawah;
        cout << hasil << '\n';
    }
    return 0;
}