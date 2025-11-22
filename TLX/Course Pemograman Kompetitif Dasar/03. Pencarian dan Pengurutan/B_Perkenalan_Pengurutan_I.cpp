#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);
    int n;cin >> n;
    float median;
    vector <int> a(n);

    for(int i = 0;i < n;i++){
        cin >> a[i];
    }

    sort(a.begin(),a.end());
    if (n % 2 == 0){
        median = (float)((a[(n/2)-1] + a[(n/2)]) / 2.0);
    }
    else{
        median = a[((n-1) / 2)];
    }
    cout << fixed << setprecision(1) << median;
    return 0;
}