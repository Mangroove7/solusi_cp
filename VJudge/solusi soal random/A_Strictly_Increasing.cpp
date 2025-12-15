#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n;cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bool cek = true;
    for (int i = 0; i < n; i++) {
        if(a[i] > a[i+1]){
            cek = false;
            break;
        }
    }
    (cek == true)?cout << "Yes\n":cout << "No\n";
    return 0;
}