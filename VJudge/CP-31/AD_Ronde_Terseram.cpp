#include <bits/stdc++.h>
using namespace std;
int digit(int n){
    int cnt = 0;
    while(n > 0){
        cnt++;
        n /= 10;
    }
    return cnt - 1;
}
int digit_pertama(int n){
    string s = to_string(n);
    string a = "";
    a += s[0];
    int t = stoi(a);
    return t;
}

int rumus(int n){
    return digit(n) * 9 + digit_pertama(n);
}
void solve() {
    int n;cin >> n;
    cout << rumus(n) << endl;
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