#include <bits/stdc++.h>
using namespace std;

void solve(){
    
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector <int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector <int> prefix(n);
    prefix[0] = a[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = a[i] + prefix[i-1];
    }
    int q;cin >> q;
    for(auto y:prefix)cout << y << endl;
    // while(q--){
    //     int x;cin >> x;
    //     auto it = lower_bound(prefix.begin(),prefix.end(),n);
    //     cout << distance(prefix.begin(),it) << '\n';
    // }
    return 0;
}