#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,x;cin >> n >> x;
    vector <int> gas;
    for (int i = 0; i < n; i++) {
        int fuel;cin >> fuel;
        gas.push_back(fuel);
    }
    int maks = 0;
    for (int i = 0; i < n; i++) {
        maks = max(max,(gas[i + 1]-gas[i]));
    }
    maks = max(maks, (2 * (x - gas[n-1])));
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