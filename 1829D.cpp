#include <bits/stdc++.h>
using namespace std;

bool f(int n, int m){
    
    
    if(n == m)return true;
    if(n % 3 != 0)return false;
    int a = n / 3;
    int b = 2 * a;
    return f(a,m) || f(b,m);

}
void solve() {
    int n,m;cin >> n >> m;
    (f(n,m))?cout << "YES\n":cout << "NO\n";
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