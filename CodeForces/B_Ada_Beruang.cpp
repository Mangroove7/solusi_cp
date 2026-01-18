#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;cin >> n;
    long long d;cin >> d;
    vector <long long> a(n);
    for (auto &i : a){
        cin >> i;
    }
    long long cnt = 0;
    unordered_set <long long> seen;
    for (int i = 0; i < n; i++) {
        long long current_num = a[i];
        long long target = current_num - d;

        
        if (seen.count(target)) {
            cnt++;
        }
        
        
        seen.insert(current_num);
    }
    cout << cnt << endl;
    return 0;
}