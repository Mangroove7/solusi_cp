#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    string air;cin >> air;
    int sum = 0;
    if(air.find("...") != string::npos){
        sum = 2;
    }
    else{
        for (int i = 0; i < n; i++) {
            if(air[i] == '.')sum++;
        }
    }
    cout << sum << endl;
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