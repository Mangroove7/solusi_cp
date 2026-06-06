#include <bits/stdc++.h>
using namespace std;

void solve() {
   long long n;cin >> n;
   for(int k = 2;k <= 29;k++){
    if(n % ((1LL << k) - 1) == 0){
        cout << n / ((1LL << k) - 1) << '\n';
        break;
    }
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