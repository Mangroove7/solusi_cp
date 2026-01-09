#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    n *= 2;
    set <int> pair_socks;
    int curr_socks = 0,max_socks = 0;
    while(n--){
        int socks;cin >> socks;
        if(pair_socks.find(socks) == pair_socks.end()){
            pair_socks.insert(socks);
            curr_socks++;
            max_socks = max(max_socks,curr_socks);
        }else{
            pair_socks.erase(socks);
            curr_socks--;
        }
    }
    cout << max_socks << endl;

    return 0;
}