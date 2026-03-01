#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;cin >> s;
    int n = s.size();
    
    
        for (int i = 0; i < n; i++) {
            int digitone = (s[i] - '0');
            if(digitone % 8 == 0){
                cout << "YES\n";
                cout << digitone;
                return 0;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int digitone = (s[i] - '0') * 10;
                int digittwo = (s[j] - '0');
                int newnum = digitone + digittwo;
                if(newnum % 8 == 0){
                    cout << "YES\n";
                    cout << newnum;
                    return 0;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    int digitone = (s[i] - '0') * 100;
                    int digittwo = (s[j] - '0') * 10;
                    int digitthree = (s[k] - '0');
                    int sum = digitone + digittwo + digitthree;
                    if(sum % 8 == 0){
                        cout << "YES\n";
                        cout << sum;
                        return 0;
                    }
                }
            }
        }
        cout << "NO\n";
    

    return 0;
}