#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;int pos;cin >> n >> pos;
    vector <int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int minim = x[0];
    int maxim = x[n - 1];
    int res = 0;
    if(pos <= minim){
        res += (maxim - pos);
    }
    else if(pos >= maxim){
        res += (pos - minim);
    }
    else{
        int distL = pos - minim;
        int distR = maxim - pos;
        res = min(distL,distR) + (maxim - minim);
        
    }
    cout << res << endl;
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