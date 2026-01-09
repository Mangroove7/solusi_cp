#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;cin >> n;
    vector <string> osu;
    vector <int> get_hastag;
    for (int i = 0; i < n; i++) {
        string mania;
        cin >> mania;
        osu.push_back(mania);
    }
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if(osu[i][j] == '#')cnt += (i + 1); 
        }
        get_hastag.push_back(cnt);
    }
    for (int j = 0; j < osu.size(); j++) {
        for (int i = get_hastag.size() - 1; i >= 0; i--) {
            if(i == (osu[j].size() - 1)){
                cout << endl;
                break;
            }
            else cout << get_hastag[i] << " ";
        }
    }
    
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