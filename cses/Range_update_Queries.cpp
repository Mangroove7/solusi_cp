#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
vector<long long> tree; // Ganti pref biasa dengan Pohon Fenwick

void add(int k, long long x) {
    while (k <= n) {
        tree[k] += x;
        k += k & -k;
    }
}

long long sum(int k) {
    long long s = 0;
    while (k > 0) {
        s += tree[k];
        k -= k & -k;
    }
    return s;
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q; cin >> n >> q;
    tree.assign(n + 2, 0); // Ukuran N+2 supaya aman saat b+1
    vector<long long> arr(n + 1, 0);
    
    for (int i = 1; i <= n; i++) cin >> arr[i];
    
    while(q--){
        int op; cin >> op;
        if(op == 1){
            int a, b, x; cin >> a >> b >> x;
            add(a, x);       // Tambah X di awal
            add(b + 1, -x);  // Kurangi X di ujung + 1
        } else {
            int k; cin >> k;
            // Nilai asli + (Hasil penjumlahan cepat dari 1 sampai K)
            cout << arr[k] + sum(k) << '\n'; 
        }
    }
    return 0;
}