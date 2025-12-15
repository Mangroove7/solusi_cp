#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll p , q , r;cin >> p >> q >> r;
    ll n;cin >> n;
    for (int i = 0; i < n; i++) {
        ll x;cin >> x;
        (x % p == 0 && x % q == 0 && x % r == 0)?cout << "YA" << endl:cout << "TIDAK" << endl;
    }
    return 0;
}