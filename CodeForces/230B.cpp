#include <bits/stdc++.h>
#define int long long
using namespace std;
bool prime(int n){
    if(n <= 1)return false;
    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0)return false;
    }
    return true;
}
void solve() {
    int n;cin >> n;
    bool is_tprime = false;
    int root = round(sqrt(n));
    if(root * root == n && n > 1){
        if(prime(root)){
            is_tprime = true;
        }
    }
    cout << ((is_tprime)?"YES":"NO") << endl;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}