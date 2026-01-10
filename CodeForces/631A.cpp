#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    vector <int> a,b;
    int cnt_a = 0,cnt_b = 0;
    for (int i = 0; i < n; i++) {
        int x_a;cin >> x_a;
        cnt_a |= x_a;
    }
    for (int i = 0; i < n; i++) {
        int x_b;cin >> x_b;
        cnt_b |= x_b;
    }
    cout << cnt_a + cnt_b;
    return 0;
}