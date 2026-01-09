#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> p(2*n+1,0);
    vector <bool> seen(2*n + 1,false);
    int curr = 0;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            int val;cin >> val;
            if(!seen[i+j]){
                p[i + j] = val;
                curr += val;
                seen[i + j] = true;
            }
        }
    }
    int total_n = 2 * n;
    int expected = (total_n * (total_n + 1) / 2);
    p[1] = expected - curr;
    for (int i = 1; i <= total_n; i++) {
        cout << p[i] << " ";
    }
    cout << endl;
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