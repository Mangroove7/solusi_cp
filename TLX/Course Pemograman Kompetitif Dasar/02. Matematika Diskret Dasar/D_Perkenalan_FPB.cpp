#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;cin >> a >> b >> c >> d;
    long long e,f;
    e = (long long)a * d + (long long)b * c;
    f = (long long)b * d;
    long long faktor = gcd(e,f);
    e /= faktor;
    f /= faktor;
    
    cout << e << " " << f;
}