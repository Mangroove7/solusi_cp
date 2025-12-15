#include <bits/stdc++.h>
using namespace std;

void solve() {
    //jika k = 1 cek jika array sudah sorted jika > 1 maka pasti bisa.
    int n,k;cin >> n >> k;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

    if(k > 1)cout << "YES\n";
    else if(k == 1){
        vector <int> b(n);
        b = a;
        sort(b.begin(),b.end());
        if(a == b){
            cout << "YES\n";
        }
        else cout << "NO\n";
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