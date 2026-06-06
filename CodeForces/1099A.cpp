#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int w,h_awal;cin >> w >> h_awal;
    int u1,d1,u2,d2;cin >> u1 >> d1 >> u2 >> d2;
    
    for(int i = h_awal;i >= 0;i--){
        w += i;

        if(i == d1)w -= u1;
        else if(i == d2)w -= u2;

        if(w < 0)w = 0;
    }
    cout << w << endl;
    return 0;
}