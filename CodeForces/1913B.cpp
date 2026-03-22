#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;cin >> s;
    int cnt0 = 0,cnt1 = 0;
    for(auto c : s){
        if(c == '0')cnt0++;
        else cnt1++;
    }
    for(int i = 0;i < s.size();i++){
        if(s[i] == '0'){
            if(cnt1 > 0)cnt1--;
            else{
                cout << s.size() - i << '\n';
                return;
            }

        }else{
            if(cnt0 > 0)cnt0--;
            else{
                cout << s.size() - i << '\n';
                return;
            }
        }
        
        
    }
    cout << 0 << '\n';
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