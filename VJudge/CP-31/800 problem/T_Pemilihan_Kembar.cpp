#include <bits/stdc++.h>
#define vii vector<int>
using namespace std;

void solve() {
    int n;cin >> n;
    vii a(n),b;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(auto c : a){
        b.push_back(n + 1 - c);
    }
    for(auto d : b){
        cout << d << " ";
    }cout << '\n';
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