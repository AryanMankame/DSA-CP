#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int h[n];
    map<int,int>mp;
    for(int i=0;i<n;i++) {
        cin >> h[i]; mp[h[i]]++;
    }
    sort(h,h+n);
    int prev = 0;
    long long int cnt = 0;
    for(int i=0;i<n;i++){
        while(i < n and h[i] == prev) i++;
        if(i < n and h[i] - 1 != prev){
          // cout << h[i] << " " << prev << endl;;
          cnt += h[i] - prev - 1;
          prev = prev + 1;
        }
        else if(i < n) prev = h[i];
        
    }
    // cout << endl;
    cout << cnt << endl;
  }
}