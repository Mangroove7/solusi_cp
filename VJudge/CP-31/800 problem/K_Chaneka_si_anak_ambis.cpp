#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    int minimum = INT_MAX;
    for (int i = 0; i < n; i++) {
        int x;cin >> x;
        if(x == 0){
            minimum = 0;
            break;
        }
        minimum = min(minimum,abs(x));
    }
    cout << minimum << '\n';
    return 0;
}