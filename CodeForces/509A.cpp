#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    vector <vector <int>> a(n,vector<int>(n,0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(i == 0 || j == 0)a[i][j] = 1;
            else{
                a[i][j] = a[i-1][j] + a[i][j-1];
            }
        }
    }

    long long ans = a[n-1][n-1];
    cout << ans << endl;
    return 0;
}