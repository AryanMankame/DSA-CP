#include<bits/stdc++.h>
using namespace std;
long long ways(long long int val){
  long long int cnt = 0;
  for(long long int i=2;i<=(long long int)cbrt(val);i++){
    // cout << i << "=>" << (long long int)pow(val/i,float(1)/3) - 1 << endl;
    cnt += val/(1ll*i*i*i);
  }
  return cnt;
}
int main(){
  long long int t; cin >> t;
  long long int l = 0, r = 5*1e15;
  while(l < r){
    long long int mid = l - (l-r)/2;
    long long int w = ways(mid);
    if(w < t) l = mid + 1;
    else r = mid;
  }
  if(ways(l) == t) cout << l << endl;
  else cout << -1 << endl;
}