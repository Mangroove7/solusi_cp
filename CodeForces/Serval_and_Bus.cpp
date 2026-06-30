#include <iostream>
#include <vector>

using namespace std;

void solve() {
    int n, t;cin >> n >> t;

    vector<int> s(n), d(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i] >> d[i];
    }

    int best_index = -1;
    int min_arrival = 2e9;

    for (int i = 0; i < n; i++) {
        int arrival = s[i];
        if (t > s[i]) {
            int diff = t - s[i];
            int rem = diff % d[i];
            if (rem == 0) {
                arrival = t;
            } else {
                arrival = t + (d[i] - rem);
            }
        }
        if (arrival < min_arrival) {
            min_arrival = arrival;
            best_index = i + 1;
        }
    }

    cout << best_index << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
