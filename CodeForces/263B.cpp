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
        if(n != k){int target = n - k - 1;
        int hasil = a[target];
        cout << hasil + 1 << " " << hasil << '\n';}
        else{
            cout << 0 << " " << 0 << endl;
        }
    }

    return 0;
}