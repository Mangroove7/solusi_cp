#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,m;cin >> n >> m;
    vector <vector <char>> a(n,vector<char>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int r = 0,c = 0;
    for (int i = 0; i < n; i++) {
        int xoring_c = 0;
        for (int j = 0; j < m; j++) {
            xoring_c ^= (a[i][j] - '0');
        
        }
        if(xoring_c == 1)c++;
    }
    for (int j = 0; j < m; j++) {
        int xoring_r = 0;
        for (int i = 0; i < n; i++) {
            xoring_r ^= (a[i][j] - '0');
        }if(xoring_r == 1)r++;
    }
    int ans = max(r,c);
    cout << ans << endl;
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