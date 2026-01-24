#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m,d;cin >> m >> d;
    int hari_ke_n;
    switch(m){
        case 1:
        hari_ke_n = 31;
        break;

        case 2:
        hari_ke_n = 28;
        break;

        case 3:
        hari_ke_n = 31;
        break;

        case 4:
        hari_ke_n = 30;
        break;

        case 5:
        hari_ke_n = 31;
        break;

        case 6:
        hari_ke_n = 30;
        break;

        case 7:
        hari_ke_n = 31;
        break;

        case 8:
        hari_ke_n = 31;
        break;

        case 9:
        hari_ke_n = 30;
        break;

        case 10:
        hari_ke_n = 31;
        break;

        case 11:
        hari_ke_n = 30;
        break;

        case 12:
        hari_ke_n = 31;
        break;

        default:
        hari_ke_n = 30;
        break;
    }
    cout << ((d-1) + hari_ke_n - 1)/7 + 1 << '\n';
    return 0;
}