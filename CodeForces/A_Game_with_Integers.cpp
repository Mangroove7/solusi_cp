#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;cin >> n;
    if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0)cout << "First\n";
    else cout << "Second\n";
}
int main(){
    int t;cin >> t;
    while(t--){
        solve();
    }
}