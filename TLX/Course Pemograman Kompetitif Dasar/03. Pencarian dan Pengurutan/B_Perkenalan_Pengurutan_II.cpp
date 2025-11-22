#include <bits/stdc++.h>
using namespace std;

bool komparator(string a,string b){
    if(a.length() != b.length()){
        return a.length() < b.length();
    }
    return a < b;
}

int main(){
    int n;cin >> n;
    vector <string> nama;
    for(int i = 0;i < n;i++){
        string x;
        cin >> x;
        nama.push_back(x);
    }
    sort(nama.begin(),nama.end(),komparator);
    for(auto x : nama){
        cout << x << '\n';
    }
    return 0;
}