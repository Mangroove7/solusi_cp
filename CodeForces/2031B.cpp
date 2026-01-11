#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <int> a(n + 1),b;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    a[0] = 0;
    for (int i = 1; i <= n; i++) {
        if(a[i] == i + 1 && a[i + 1] == i){
            swap(a[i],a[i + 1]);
        }
    }
    bool can_sorted = true;
    for (int i = 1; i <= n - 1; i++) {
        if(a[i] != i){
            can_sorted = false;
            break;
        }
    }
    (can_sorted)?cout << "YES\n":cout << "NO\n";
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