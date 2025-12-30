#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

void solve() {
    int n;cin >> n;
    vi a,t;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        a.pb(x);
    }
    t = a;
    sort(t.begin(),t.end());
    if(t != a){
        cout << 0 << endl;
    }
    else{
        int mini = INT_MAX;

        for (int i = 0; i < n - 1; i++) {
            mini = min(mini,a[i + 1] - a[i]);
        }
        mini /= 2;
        cout << mini + 1 << endl;
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