#include <bits/stdc++.h>
#define vi vector <int>
using namespace std;

void solve() {
    int n;cin >> n;
    vi a(n);
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if(sum == 0)cout << "NO\n";
    else if (sum > 0){
        sort(a.begin(),a.end(),greater<int>());
        cout << "YES\n";
        for(auto i : a){
            cout << i << " ";
        }
        cout << endl;
    }
    else if (sum < 0){
        sort(a.begin(),a.end());
        cout << "YES\n";
        for(auto i : a){
            cout << i << " ";
        }
        cout << endl;
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