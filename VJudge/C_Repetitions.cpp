#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string dna;cin >> dna;
    int cnt = 1;
    int cnt_max = 1;
    for (int i = 1; i < dna.size(); i++) {
        if(dna[i] == dna[i-1]){
            cnt++;
        }
        else{
            cnt_max = max(cnt,cnt_max);
            cnt = 1;
            
        }
        
    }
     cnt_max = max(cnt_max, cnt);
    cout << cnt_max << endl;
    return 0;
}