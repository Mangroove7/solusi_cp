#include <bits/stdc++.h>
#define int long long
using namespace std;


int sum(int& a,int& b,vector <int>& pref){
    if(a == 1)return pref[b - 1];
    return pref[b - 1] - pref[a - 2];
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,q;cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector <int> pref(n);
    pref[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref[i] += pref[i-1] + a[i];
    }
    
    while(q--){
        int a,b;cin >> a >> b;
        cout << sum(a,b,pref) << '\n';
    }

    return 0;
}