#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;cin >> a >> b;
    
    int minimum = min(max(2*a, b), max(a, 2*b));
    
    printf("%d\n",minimum * minimum);
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