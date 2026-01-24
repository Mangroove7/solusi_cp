#include <bits/stdc++.h>
#define all(u) (u).begin(),(u).end()
using namespace std;

vector <long long> pref_sum(const vector <long long>& v){
    long long n = v.size();
    vector <long long> pref(n + 1,0);
    for (int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + v[i];
    }
    return pref;
}
long long count(vector <long long>& pref,int& l,int& r){
    return pref[r] - pref[l - 1];
}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin >> n;
    vector <long long> v(n),u,pref_v,pref_u;
    for(auto &i : v)cin >> i;
    u = v;
    sort(all(u));
    pref_v = pref_sum(v);
    pref_u = pref_sum(u);
    int m;cin >> m;
    while(m--){
        int type,l,r;cin >> type >> l >> r;
        (type == 1)?cout << count(pref_v,l,r) << '\n':cout << count(pref_u,l,r) << '\n';
    }
}