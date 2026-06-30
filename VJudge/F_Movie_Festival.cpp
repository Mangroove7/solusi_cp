#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;
    
    vector<pair<int, int>> movies(n);
    for (int i = 0; i < n; i++) {
        cin >> movies[i].second >> movies[i].first;
    }
    
    sort(movies.begin(), movies.end());
    
    int count = 0;
    int last_end_time = 0;
    
    for (int i = 0; i < n; i++) {
        if (movies[i].second >= last_end_time) {
            count++;
            last_end_time = movies[i].first;
        }
    }
    
    cout << count << endl;
    
    return 0;
}
