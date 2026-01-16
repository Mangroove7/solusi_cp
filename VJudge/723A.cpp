#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int x0,x1,x2;cin >> x0 >> x1 >> x2;
    vector <int> fr = {x0,x1,x2};
    sort(fr.begin(),fr.end());
    int dist = (fr[2] - fr[1]) + (fr[1]-fr[0]);
    cout << dist << endl;

    return 0;
}