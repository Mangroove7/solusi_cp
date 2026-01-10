//finally I solved 1000 rating :D
//by ZetroMan
 
#include <bits/stdc++.h>
using namespace std;
 int removeZeros(int n) {
    int res = 0, power = 1;
    while (n > 0) {
        int digit = n % 10;
        if (digit != 0) {
            res += digit * power;
            power *= 10;
        }
        n /= 10;
    }
    return res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int a,b;cin >> a >> b;
    int c = a + b;
    int a_non_zero = removeZeros(a);
    int b_non_zero = removeZeros(b);
    int c_non_zero = removeZeros(c);
    
    int c_sum_non_zero = a_non_zero + b_non_zero;
    (c_non_zero == c_sum_non_zero)?cout << "YES\n":cout << "NO\n";
    return 0;
}