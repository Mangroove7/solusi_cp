#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binser(vector <int>& arr,int x){
    sort(arr.begin(),arr.end());
    int n = arr.size() - 1;
    int left = 0;
    int right = n;
    while (left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] == x)return mid;
        if(arr[mid] > x)right = mid - 1;
        else left = mid + 1;
    }
    return 0;
}

int main(){
    
    int n, x;cin >> n;
    vector <int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    cout << binser(arr,x) << '\n';

    return 0;

}