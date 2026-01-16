#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, k;cin >> a >> b >> k;
    long long step = 0;
    for (long long i = a; i < b; i *= k) {
        step++;
    }
    cout << step << '\n';
    return 0;
}