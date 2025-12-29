#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;cin >> n;
    int total_nol = 0;
    int pembagi = 5;
    while(pembagi <= n){
        total_nol += (n / pembagi);
        pembagi *= 5;
    }
    cout << total_nol << endl;
    return 0;
}