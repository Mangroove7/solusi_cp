#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a;
    bool can_beautiful = false;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(gcd(a[i],a[j]) <= 2){
                can_beautiful = true;
                break;
            }
        }
    }
    (can_beautiful)?cout << "YES\n":cout << "NO\n";
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