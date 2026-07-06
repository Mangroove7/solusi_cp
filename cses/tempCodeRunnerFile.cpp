#include <bits/stdc++.h>
#define int long long
#define vi vector <int>
using namespace std;
// int l = 0,r = 1e9;

// bool check(int n,vi& arr,int val){
//     int x = 0;
//     for (int i = 0; i < n; i++) {
//         x += abs(arr[i] - val);
//     }
// }
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;

    map <int,int> p;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        p[x]++;
    }
    int maks = INT_MIN;
    int x = -1;
    for(auto const& [angka, freq] : p){
        if(freq > maks){
            maks = freq;
            x = angka;
        }
    }
    int sol = 0;
    for(auto const& [angka, freq] : p){
        sol += abs(x - angka);
    }
    cout << sol << endl;
    return 0;
}