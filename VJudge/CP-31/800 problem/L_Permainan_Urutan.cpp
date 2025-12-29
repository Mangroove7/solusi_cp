#include <bits/stdc++.h>
#define vii vector<long long>
using namespace std;

void solve() {
    int n;cin >> n;
    vii b(n);
    vii a;
    
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    a.push_back(b[0]);
    for (int i = 1; i < n; i++) {
        if(b[i] >= b[i - 1]){
            a.push_back(b[i]);
            
        }
        else{
            a.push_back(b[i]);
            a.push_back(b[i]);
        }
    }
    cout << a.size() << endl;
    for(auto x : a){
        cout << x << endl;
    }
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