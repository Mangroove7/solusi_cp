#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    int cnt_minus = 0;
    int cnt = 0,ops = 0;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        if(x == -1)cnt_minus++;
        else cnt++;
    }
    while(cnt_minus > cnt){
        cnt_minus--;
        cnt++;
        ops++;
    }
    if(cnt_minus % 2 != 0){
        ops++;
    }
    cout << ops << endl;
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