#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector <int> angka(3);
    for (int i = 0; i < 3; i++) {
        cin >> angka[i];
    }
    sort(angka.begin(),angka.end());
    cout << angka[1] << '\n';
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