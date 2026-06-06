#include <bits/stdc++.h>
using namespace std;

void dadu(long long& x){
    if(x > 14){
        if(x % 14 <= 6 && x % 14 >= 1)cout << "YES\n";
        else cout << "NO\n";
    }
    else cout << "NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    for (int i = 0; i < n; i++) {
        long long x;cin >> x;
        dadu(x);
    }

    return 0;
}