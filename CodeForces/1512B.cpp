#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;
    vector<string> s(n);
    int r1 = -1, c1, r2, c2;

    for (int i = 0; i < n; i++) {
        cin >> s[i];
        for (int j = 0; j < n; j++) {
            if (s[i][j] == '*') {
                if (r1 == -1) { r1 = i; c1 = j; }
                else { r2 = i; c2 = j; }
            }
        }
    }

    int r3 = r1, c3 = c2;
    int r4 = r2, c4 = c1;

    if (r1 == r2) { 
        r3 = (r1 + 1) % n;
        r4 = (r2 + 1) % n;
        c3 = c1;
        c4 = c2;
    } else if (c1 == c2) {
        c3 = (c1 + 1) % n;
        c4 = (c2 + 1) % n;
        r3 = r1;
        r4 = r2;
    }

    s[r3][c3] = '*';
    s[r4][c4] = '*';

    for (int i = 0; i < n; i++) cout << s[i] << "\n";
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