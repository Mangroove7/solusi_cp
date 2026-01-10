#include <bits/stdc++.h>
#define vi vector<int>
#define pb push_back
using namespace std;

void solve() {
    int n;cin >> n;
    vi b;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        b.pb(x);
    }
    int cnt = 0;
    for(auto x : b){
        int cnt_0 = 0;
        if(x == 0)cnt_0++;
        else{
            cnt = max(cnt,cnt_0);
            cnt_0 = 0;
        }
    }
    
    cout << cnt << endl;
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