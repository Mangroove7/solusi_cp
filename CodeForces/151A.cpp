#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k,l,c,d,p,nl,np;cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int mili = k * l;
    int sulang = mili / nl;
    int nipis = c * d;
    int garam = p / np;
    vector <int> tot = {mili,sulang,nipis,garam};
    int it = *min_element(tot.begin(),tot.end());
    int res = it / n;
    cout << res << endl;

    return 0;
}