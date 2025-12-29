#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c; cin >> a >> b >> c;
    bool check = false;
    if(c % 2 == 0){
        if(b >= a)check = false;
        else check = true;
    }
    else{
        if(b > a)check = false;
        else check = true;
    }
    (check)?cout << "First" << endl: cout << "Second" << endl;
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