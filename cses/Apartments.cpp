#include <bits/stdc++.h>
#define vi vector <int>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m,k;cin >> n >> m >> k;
    vi a(n),b(m);
    for(auto& i : a)cin >> i;
    for(auto& i : b)cin >> i;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int cnt = 0;
    int i = 0,j = 0;
    while(i < n && j < m){
        if(abs(a[i] - b[j]) <= k){
            cnt++;
            i++;
            j++;
        }else if(a[i] < b[j]){
            i++;
        }else {
            j++;
        }
    }
    cout << cnt << '\n';
    return 0;
}