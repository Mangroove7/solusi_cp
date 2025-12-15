#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve() {
    ll n,x;cin >> n >> x;
    vector <ll> gas;
    gas.push_back(0);
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        gas.push_back(input);
    }
    n++;
    ll maks = 0;
    for (ll i = 0; i < n - 1; i++) {
        maks = max(maks,gas[i+1] - gas[i]);
    }
    maks = max(maks,2 * (x - gas[n-1]));
    cout << maks << endl;
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