#include <bits/stdc++.h>
#define int long long
#define vi vector <int>
using namespace std;
//bsta sol
int get_cost(int n, vi& arr,int val){
    int curr = 0;
    for (int i = 0; i < n; i++) {
        curr += abs(arr[i] - val);
    }
    return curr;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;

    vi p(n);
    for(auto& i :p)cin >> i;

    int l = 0,r = *max_element(p.begin(),p.end());
    int ans = LLONG_MAX;
    while(l <= r){
        int mid = l + (r - l) / 2;

        int cost_curr = get_cost(n,p,mid);
        int cost_next = get_cost(n,p,mid + 1);

        ans = min({ans, cost_curr, cost_next});

        if(cost_curr > cost_next){
            l = mid + 1;
        }else r = mid - 1;
    }
    cout << ans << '\n';
    return 0;
}