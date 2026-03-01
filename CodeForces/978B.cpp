#include <iostream>
using namespace std;

int main(){

    int n;cin >> n;
    string s;cin >> s;
    int cnt = 0;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if(s[i] != 'x')cnt = 0;
        else {
            cnt++;
            if(cnt >= 3)ans++;
        }
    }cout << ans;
}