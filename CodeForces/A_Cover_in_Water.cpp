#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    while(t--){
        int n;cin >> n;
        string s;cin >> s;
        if(s.find("...") != s.npos){
            cout << 2 << endl;
        }
        else{
            int cnt = 0;
            for(auto x : s){
                if(x == '.')cnt++;
            }
            cout << cnt << '\n';
        }
    }
    return 0;
}