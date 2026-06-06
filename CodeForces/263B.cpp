#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k; cin >> n >> k;
    vector <int> a(n);
    int maxim = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if(k > n)cout << -1 << endl;
    else {
        sort(a.begin(),a.end());
        int target = k - 1;
        int hasil = a[target];
        cout << 0 << " " << hasil << '\n';
    }

    return 0;
}