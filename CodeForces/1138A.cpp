#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; cin >> n;
    vector<int> sushi(n);
    for (int i = 0; i < n; i++) cin >> sushi[i];

    vector<int> blocks;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        if (i < n && sushi[i] == sushi[i-1]) {
            count++;
        } else {
            blocks.push_back(count);
            count = 1;
        }
    }

    int max_len = 0;
    for (int i = 0; i < (int)blocks.size() - 1; i++) {
        // The length is limited by the shorter of the two adjacent blocks
        max_len = max(max_len, 2 * min(blocks[i], blocks[i+1]));
    }

    cout << max_len << endl;
    return 0;
}