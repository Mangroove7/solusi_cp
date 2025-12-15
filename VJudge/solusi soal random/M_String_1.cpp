#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    string s,t;cin >> s >> t;
    string r;
    for (int i = 0; i < n; i++) {
        r += s[i];
        r += t[i];
    }
    cout << r;
    return 0;
}