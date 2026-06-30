#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector <int> a(n);
    for (auto& i : a)cin >> i;
    long long cnt = 0;
    for (int i = 1; i < n; i++) {
        if (a[i-1] > a[i]){
            cnt += (a[i-1] - a[i]);
            a[i] = a[i-1];
        }
    }
    cout << cnt << endl;
    return 0;
}