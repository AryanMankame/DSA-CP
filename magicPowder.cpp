#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m; cin >> n >> m;
  int a[n],b[n];
  for(int i=0;i<n;i++) cin >> a[i];
  for(int i=0;i<n;i++) cin >> b[i];
  int l = 0;
  int r = 1e6;
  while(l < r){
    // cout << l << " " << r << " ";
    int mid = r - (r-l)/2;
    // cout << mid << ' ';
    long long int req = 0;
    for(int i=0;i<n;i++){
        req += max(mid*a[i] - b[i],0);
    }
    // cout << req << endl;
    if(req <= m){
        l = mid;
    }
    else r = mid-1;
  }
  cout << l << endl;
}