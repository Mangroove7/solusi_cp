#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    string x,s;cin >> x >> s;
    int cnt = 0;

    for (int i = 0; i < 5; i++) {
        if(x.find(s) == string::npos){
            x += x;
            cnt++;
        }
    }
    (cnt == 5 && x.find(s) == string::npos)?cnt = -1:cnt = cnt;
    cout << cnt << '\n';

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