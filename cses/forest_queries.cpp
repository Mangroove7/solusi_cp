#include <bits/stdc++.h>
#define int long long
using namespace std;

int sum(int& y1, int& x1, int& y2, int& x2, vector <vector<int>>& pref){
    return pref[y2][x2] - pref[y1-1][x2] - pref[y2][x1 - 1] + pref[y1-1][x1-1];
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q;cin >> n >> q;
    vector<vector<int>>arr(n + 1,vector<int>(n + 1,0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            char a;cin >> a;
            if(a == '*'){
                arr[i][j] = 1;
            }
            else arr[i][j] = 0;
        }
    }
    vector<vector<int>>pref(n + 1,vector<int>(n + 1,0));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            pref[i][j] = pref[i - 1][j] + pref[i][j-1] - pref[i-1][j-1] + arr[i][j];
        }
    }
    while(q--){
        int y1,x1,y2,x2;cin >> y1 >> x1 >> y2 >> x2;
        cout << sum(y1,x1,y2,x2,pref) << '\n';
    }
    return 0;
}