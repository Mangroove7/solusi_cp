#include <bits/stdc++.h>
using namespace std;

long long fast_pow(long long a, long long b, long long c) {
    long long res = 1;
    a %= c;
    while (b > 0) {
        if (b % 2 == 1) res = (res * a) % c;
        a = (a * a) % c;
        b /= 2;
    }
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a,b,c;cin >> a >> b >> c;
    cout << fast_pow(a,b,c);

    return 0;
}