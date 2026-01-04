#include <bits/stdc++.h>
using namespace std;

std::string decToBinNoZeroIndex(long long n) {
    // Determine a sufficient bit size. For a long long, 64 bits is standard.
    // For smaller types like int, 32 might suffice.
    const size_t num_bits = 64; 

    // Create a bitset from the number
    std::bitset<num_bits> bits(n);

    // Convert the bitset to a string
    std::string binary_str = bits.to_string(); // e.g., "000...01010"

    // Find the position of the first '1'
    size_t first_one_pos = binary_str.find_first_of('1');

    // If no '1' is found (i.e., the number was 0), return "0"
    if (first_one_pos == std::string::npos) {
        return "0";
    }

    // Otherwise, return the substring starting from the first '1'
    return binary_str.substr(first_one_pos);
}
void solve() {
    long long n;cin >> n;
    if(n % 2 == 0)cout << -1 << endl;
    else{
        string biner = decToBinNoZeroIndex(n);

        vector <long long> m;
        for (long long i = 0; i <= biner.size() - 2; i++) {
            if(biner[i] == '1')m.push_back(2);
            else m.push_back(1);
        }
        cout << m.size() << '\n';
        for(auto x : m){
            cout << x << " ";
        }cout << endl; 
    }
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