#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a,b;cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if(a[i] < 97){
            a[i] += 32;
        }
        if(b[i] < 97){
            b[i] += 32;
        }
    }
    if(b > a){
        cout << -1 << endl;
    }

    else if(b < a)
    cout << 1 << endl;
    else if(a == b)
    cout << 0 << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}