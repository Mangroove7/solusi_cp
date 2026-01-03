#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,k;cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(k > 1){
        cout << "YES\n";
    }
    else if(k == 1){
        vector <int> cek_arr;
        cek_arr = a;
        sort(cek_arr.begin(),cek_arr.end());
        if(a == cek_arr){
            cout << "YES\n";

        }else{
            cout << "NO\n";
        }
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