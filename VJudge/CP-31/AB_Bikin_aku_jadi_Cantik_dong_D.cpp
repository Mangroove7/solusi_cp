#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int maks = *max_element(a.begin(),a.end());
    int min = *min_element(a.begin(),a.end());
    if(maks == min)cout << "NO\n";
    else{
        cout << "YES\n";
        sort(a.begin(),a.end());
        cout << maks << " ";
        for (int i = 0; i < n-1; i++) {
            cout << a[i] << " ";
        }cout << endl;
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