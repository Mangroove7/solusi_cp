#include <bits/stdc++.h>
#define int long long
using namespace std;

bool last(const pair<int, int>& a,const pair <int, int>& b){
    return a.second < b.second;
}
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector <pair <int,int>> movie(n);
    for (int i = 0; i < n; i++) {
        cin >> movie[i].first >> movie[i].second;
    }
    sort(movie.begin(),movie.end(),last);
    int cnt = 0;
    int last_time = -1;
    for (int i = 0; i < n; i++) {
        if(movie[i].first >= last_time){
            cnt++;
            last_time = movie[i].second;
        }
    }
    cout << cnt << endl;
    return 0;
}