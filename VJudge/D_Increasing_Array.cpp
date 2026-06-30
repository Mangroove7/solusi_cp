#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector <int> a(n);
    for(auto& i : a)cin >> i;
    int step = 0;
    for (int i = 1; i < n; i++) {
        if(a[i-1] > a[i]){
            step += a[i-1] - a[i];
            a[i] = a[i-1];
        }
    }
     cout << step << endl;
    
    return 0;
}