#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    int n = s.size();
    char curr_bin = '0';
    for (int i = 0; i < n; i++) {
        
        char arr_curr = s[i];
        if(arr_curr != '0' && arr_curr != '1'){
            while(s.find(arr_curr) != string::npos){
                int idx = s.find(arr_curr);
                s[idx] = curr_bin;
            }(curr_bin == '0')?curr_bin = '1':curr_bin = '0';
        }
        else continue;
    }
    cout << s << endl;
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