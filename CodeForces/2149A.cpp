#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> pos(n);
    for (int i = 0; i < n; i++) {
        cin >> pos[i];
    }
    int cnt = 0;
    int min = 0;
    for (int i = 0; i < n; i++) {
        if(pos[i] == 0)cnt++;
        if(pos[i] == -1)min++;
    }
    (min % 2 == 0)?cnt += (min % 2):cnt += (min % 2) + 1;
    cout << cnt << endl;
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