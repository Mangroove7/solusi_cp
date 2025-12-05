#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a(n);
    bool is_even = false,is_odd = false;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0)is_even = true;
        if(a[i] % 2 != 0)is_odd = true;
    }
    if (is_even && is_odd) {
        sort(a.begin(),a.end());
        for(auto x : a){
            cout << x << ' ';
            
        }cout << '\n';

    }else{
        for(auto x : a){
            cout << x << ' ';
            
        }cout << '\n';
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}