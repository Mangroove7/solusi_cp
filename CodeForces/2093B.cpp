#include <bits/stdc++.h>
using namespace std;
long long minim(string& s){
    int sz = s.size();
    long long res = 0;
    long long last;
    for (long long i = sz - 1; i >= 0; i--) {
        if((s[i] - '0') > 0){
            last = i;
            break;
        }
        res++;
    }
    for (long long i = 0; i <= last; i++) {
        if((s[i] - '0') > 0)res++;
    }
    return res - 1;
}
void solve() {

    string s;cin >> s;
    cout << minim(s) << endl;
    
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