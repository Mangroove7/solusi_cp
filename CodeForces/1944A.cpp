#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int t;cin >> t;
  while(t--){
    int n,k;cin >> n >> k;
    (k >= n - 1)?cout << 1 << endl:cout << n << endl;
  }
}