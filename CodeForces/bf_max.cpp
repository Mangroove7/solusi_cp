#include <bits/stdc++.h>
#define vi vector <int>
#define PB push_back
#define F(i,n,b) for(int i = b;i < n;i++) 
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vi a(n);
    F(i,n,0){
        cin >> a[i];
    }

int best = 0;
    F(i,n,0){
        int sum = 0;
        F(j,n,i){
            sum += a[j];
            best = max(best,sum);
        }
    }
    cout << best << '\n';

    return 0;
}