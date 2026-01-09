#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool cek = true;
    if(n > 2){
        for (int i = 0; i < n-2; i++) {
        if (a[i] != a[i+2]){
            cek = false;
            break;
        }
    }
}
    (cek)?cout << "Yes\n":cout << "No\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        cout << "tes ke " << t << '\n';
        solve();
        
    }

    return 0;
}