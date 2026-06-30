#include <bits/stdc++.h>

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    set <int> a;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        a.insert(x);
    }
    int hasil = a.size();
    cout << hasil << '\n';
    return 0;
}