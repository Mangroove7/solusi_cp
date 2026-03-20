#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c;cin >> a >> b >> c;
    vector <int> food = {a,b,c};
    sort(food.rbegin(),food.rend());
    int cnt = 0;
    for (int i = 0; i < 3; i++) {
        if(food[i] > 0){
            cnt++;
            food[i]--;
        }
    }
    if(food[0] > 0 && food[1] > 0){
        cnt++;
        food[0]--;
        food[1]--;
    }
    if(food[0] > 0 && food[2] > 0){
        cnt++;
        food[0]--;
        food[2]--;
    }
    if(food[1] > 0 && food[2] > 0){
        cnt++;
        food[1]--;
        food[2]--;
    }
    if(food[0] > 0 && food[1] > 0 && food[2] > 0){
        cnt++;
        food[0]--;
        food[1]--;
        food[2]--;
    }
    cout << cnt << endl;
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