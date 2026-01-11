#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a,b,c,d;cin >> a >> b >> c >> d;
    vector <int> arr = {a,b,c,d};
    sort(arr.begin(),arr.end());
    int mid = arr.size() / 2;
    int minim = arr[0];
    cout << arr[mid] * minim << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}