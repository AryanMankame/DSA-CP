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
    int cnt = 0;
    int ans = 0;
    for(int i=0;i<n;i++){
        if(h[i] > cnt){
            cnt++;
            ans += h[i] - cnt;
        }
    }
    cout << ans << endl;
  }
}