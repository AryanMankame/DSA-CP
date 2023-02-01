#include<bits/stdc++.h>
using namespace std;
pair<int,int> maxmindig(long long int n){
    long long int mx = -1,mn = 10;
    while(n){
        mx = max(mx,n%10);
        mn = min(mn,n%10);
        n /= 10;
    }
    return {mx,mn};
}
int main(){
  int t; cin >> t;
  while(t--){
    long long int a,n; cin >> a >> n;
    long long int s = a;
    for(int i=1;i<n;i++){
        pair<int,int> p = maxmindig(s);
        if(p.first*p.second == 0) break;
        s += p.first*p.second;
    }
    cout << s << endl;
  }
}