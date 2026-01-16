#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    unordered_map <string,int>str;
    string win = "";
    int maxim = 0;
    while(n--){
        string nama;cin >> nama;
        str[nama]++;
        if(str[nama] > maxim){
            maxim = str[nama];
            win = nama;
        }
    }
    cout << win << '\n';
    
    return 0;
}