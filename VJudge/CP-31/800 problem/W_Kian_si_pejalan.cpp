#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;cin >> a >> b >> c >> d;
    if(d < b)cout << -1 << endl;
    else{
        int cnt = 0;
        int selisih_y = d - b;
        cnt += selisih_y;
        a += selisih_y;
        if(c < selisih_y)cout << -1 << endl;
        else{cnt += a - c;
        cout << cnt << endl;
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