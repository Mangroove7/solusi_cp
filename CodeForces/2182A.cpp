#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    // PATH 1: Cost to remove all "2025"s
    // Since "2025" doesn't overlap with itself, cost is just the count of occurrences.
    int cost_remove_2025 = 0;
    for (int i = 0; i <= n - 4; i++) {
        if (s.substr(i, 4) == "2025") {
            cost_remove_2025++;
        }
    }

    // PATH 2: Cost to create at least one "2026"
    // We try to build "2026" at every possible position and find the cheapest spot.
    int cost_make_2026 = 1e9; // Initialize with a large number
    string target = "2026";
    
    for (int i = 0; i <= n - 4; i++) {
        int current_ops = 0;
        for (int k = 0; k < 4; k++) {
            if (s[i + k] != target[k]) {
                current_ops++;
            }
        }
        cost_make_2026 = min(cost_make_2026, current_ops);
    }

    // The answer is the easier of the two paths
    cout << min(cost_remove_2025, cost_make_2026) << endl;
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