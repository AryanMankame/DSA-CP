#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    long long int n,h; cin >> n >> h;
    long long int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    long long int l = 1, r = h;
    while(l <= r){
        int mid = l - (l-r)/2;
        long long int s = mid;
        // cout << l << " " << r << " " << mid << endl;
        for(int i=0;i<n-1;i++){
            if(a[i+1] - a[i] < mid) s += a[i+1] - a[i];
            else s += mid;
        }
        if(s < h){
            l = mid+1;
        }
        else r = mid-1;
    }
    cout << l << endl;
  }
}