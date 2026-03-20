#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    int cnt_0 = 0,cnt_1 = 0;
    for(auto c : s){
        if(c == '0')cnt_0++;
        else cnt_1++;
    }
    for(int i = 0;i < s.size();i++){
        if(s[i] == '0'){
            if(cnt_1 > 0){
                cnt_1--;
            }else{
                int res = s.size() - i;
                cout << res << endl;
                return;
            }
        }else{
            if(cnt_0 > 0){
                cnt_0--;
            }
            else{
                int res = s.size() - i;
                cout << res << endl;
                return;
            }
        }
    }
    cout << 0 << endl;
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