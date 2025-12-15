#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,p,q,r,s ; cin >> n >> p >> q >> r >> s;
    p--;q--;r--;s--;
    vector <int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector <int> b = a;
    for (int i = 0; i <= (q-p); i++) {
        b[p + i] = a[r + i];
        b[r + i] = a[p + i];
    }
    for(auto i : b){
        cout << i << " ";
    }
    return 0;
}