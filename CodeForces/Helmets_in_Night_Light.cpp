#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n,p;cin >> n >> p;
    vector <long long> a(n),b(n);
    for(auto& i : a)cin >> i;
    for(auto& i : b)cin >> i;
    vector <pair <long long,long long>> pairs(n);
    for (int i = 0; i < n; i++) {
        pairs[i] = {b[i],a[i]};
    }

    sort(pairs.begin(),pairs.end());

    long long cost = p;
    long long sisa = n - 1;
    for (int i = 0; i < n; i++) {
        if (sisa <= 0) break;
        long long sekarang = pairs[i].first;
        long long kapasitas = pairs[i].second;

        if(sekarang >= p)break;

        long long diambil = min(sisa,kapasitas);
        cost += diambil * sekarang;
        sisa -= diambil;

        
    }
    if(sisa > 0){
            cost += sisa * p;
        }
    cout << cost << endl;
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