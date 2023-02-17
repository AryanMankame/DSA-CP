#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n,m,d; cin >> n >> m >> d;
    int p[n],a[m];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin >> p[i];
        mp[p[i]] = i;
    }
    for(int i=0;i<m;i++) cin >> a[i];
    // for(auto i:mp){
    //     cout << i.first << " " << i.second << endl;
    // }
    int moves = INT_MAX;
    for(int i=0;i<m-1;i++){
        if(mp[a[i]] > mp[a[i+1]]) {
            moves = 0; 
            break;
        }
        int k = mp[a[i]] + d + 1 - mp[a[i+1]];
        if(mp[a[i+1]] + k < n) moves = min(moves,max(k,0));
        else if(mp[a[i]] - k >= 0) moves = min(moves,max(k,0));
        else if(n-1  - mp[a[i+1]] + mp[a[i]] >= k) moves = min(moves,max(k,0));
        moves = min(moves,max(mp[a[i+1]] - mp[a[i]],0));
    }
    if(moves == INT_MAX) cout << 0 << endl;
    else
    cout << moves << endl;
  }
}