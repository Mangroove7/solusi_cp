#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int hitung_ganjil = 0;
    while(n--){
        int x;cin >> x;
        if(x % 2 == 1)hitung_ganjil++;
    }
    (hitung_ganjil % 2 == 0)?cout << "YES\n":cout << "NO\n";
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