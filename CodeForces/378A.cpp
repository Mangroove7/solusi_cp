#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a,b;cin >> a >> b;
    int skor1 = 0,skor2 = 0,skor_seri = 0;
    for (int x = 1; x <= 6; x++) {
        if(abs(a-x) < abs(b-x))skor1++;
        else if(abs(a-x) == abs(b-x))skor_seri++;
        else skor2++;
    }
    cout << skor1 << ' ' << skor_seri << ' ' << skor2 << '\n';

    return 0;
}