#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a,b;
    
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        sum += x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        sum -= x;
        b.push_back(x);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans += (a[i] ^ b[i]);
    }
    cout << min(ans,abs(sum) + 1) << endl;
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