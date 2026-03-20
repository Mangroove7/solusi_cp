#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

void solve() {
    //Kita dapat menggunakan BFS dalam solusi ini
    //input dan target
    ll n,k;cin >> n >> k;
    queue <ll> antrian;
    set <ll> proses;
    //mula-mula init waktu = 0 
    int waktu = 0;
    //telusur dari atas (induk)
    antrian.push(n);
    //jika n == k sedari awal kita langsung return saja 0 langkah
    if(n == k){
        cout << 0 << '\n';
        return;
    }
    else{
        //selagi antrian tidak kosong (masih menelusuri)
        while(!antrian.empty()){
            int besar = antrian.size();
            //step atau waktu bertambah
            waktu++;
            for (int i = 0; i < besar; i++) {
                // init antrian terdepan dan ambil untuk dicek dan pop dari antrian
                ll curr = antrian.front();
                antrian.pop();

                //buat sesuai aturan a = ceil(curr/2) == (curr + 1)/2
                //b = floor(curr/2) == curr/2 -> karena tipe ll auto bulat kebawah
                ll a = (curr + 1) / 2;
                ll b = curr / 2;
                //jika ketemu maka return dan stop iterasi
                if(k == a || k == b){
                    cout << waktu << endl;
                    return;
                }//jika tidak sesuai kita buang dan telusur lagi grafnya
                else{
                    //jika a dan b baru pertama kali dicek dan a > k || b > k
                    if(proses.count(a) < 1 && a > k){
                        proses.insert(a);
                        antrian.push(a);
                    }
                    if(proses.count(b) < 1 && b > k){
                        proses.insert(b);
                        antrian.push(b);
                    }
                }
                
            }//limit 1e9 atau 10^9
            if(waktu > 40)break;
        }//tidak ditemukan return -1
        cout << -1 << endl;
        
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