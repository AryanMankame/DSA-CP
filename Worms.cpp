#include<bits/stdc++.h>
using namespace std;
int bs(int a[],int n,int key){
    int l = 0,r = n-1;
    while(l < r){
        int mid = l - (l-r)/2;
        if(a[mid] == key) return mid;
        else if(a[mid] > key){
            r = mid;
        }
        else l = mid+1;
    }
    return l;
}
int main(){
  int n; cin >> n;
  int a[n]; 
  for(int i=0;i<n;i++) cin >> a[i];
  int ps[n];
  ps[0] = a[0];
  for(int i=1;i<n;i++) ps[i] = ps[i-1]+a[i];
  int m; cin >> m;
  int b[m];
  for(int i=0;i<m;i++) cin >> b[i];
  for(int i=0;i<m;i++){
    cout << bs(ps,n,b[i]) + 1 << endl;
  }
}