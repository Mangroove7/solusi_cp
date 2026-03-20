#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    int p;cin >> p;
    vector <int> freq(n+1,0);
    while(p--){
        int x;cin >> x;
        freq[x]++;
    }
    int q;cin >> q;
    while(q--){
        int x;cin >> x;
        freq[x]++;
    }bool can_pass = true;
    for (int i = 1; i <= n; i++) {
        if(freq[i] == 0){
            can_pass = false;
            break;
        }
    }
    cout << ((can_pass)? "I become the guy.\n" : "Oh, my keyboard!\n");
    return 0;
}