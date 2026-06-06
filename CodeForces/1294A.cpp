#include <bits/stdc++.h>
#define int long long
using namespace std;

void solve() {
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    vector <int> saudari = {a,b,c};
    int nilai_maximal = *max_element(saudari.begin(),saudari.end());
    int cnt = 0;
    for (int i = 0; i < saudari.size(); i++) {
        cnt += nilai_maximal - saudari[i];
    }
    n -= cnt;
    if(n % 3 == 0 && n >= 0)cout << "YES\n";
    else cout << "NO\n";
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}