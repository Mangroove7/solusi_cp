#include <bits/stdc++.h>
using namespace std;

int solusi_empat(int& n, vector <int>& a){
    int cnt = 0;int cost = INT_MAX;
    for(auto x : a){
        if(x % 2 == 0)cnt++;
        cost = min(cost,(4 - (x % 4)) % 4);
    }
    if(cnt >= 2)cnt = 0;
    else if(cnt == 1)cnt = 1;
    else cnt = 2;
    return min(cnt,cost);
}
int solusi_prima(int& k, int& n, vector <int>& a){
    int cost = INT_MAX;
    for(auto x : a){
        cost = min(cost,(k - (x % k)) % k);
    }
    return cost;
}
void solve() {
    int n,k;cin >> n >> k;
    vector <int> a(n);
    for (auto& i : a)cin >> i;
    if(k == 4)cout << solusi_empat(n,a) << '\n';
    else cout << solusi_prima(k,n,a) << '\n';
    
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