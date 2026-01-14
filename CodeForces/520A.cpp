#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    string s;cin >> s;
    set <int> check;
    for (int i = 0; i < n; i++) {
        if(s[i] < 'a')s[i] += 32;
    }
    for (int i = 0; i < n; i++) {
        check.insert(s[i]);
    }
    cout << (check.size() == 26 ? "YES\n" : "NO\n");
    return 0;
}