#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  int a[t];
  for(int i=0;i<t;i++) cin >> a[i];
  sort(a,a+t);
  if(a[t-1] >= a[t-2]+a[t-3]){
    cout << "NO" << endl;
  }
  else{
    cout << "YES" << endl;
    cout << a[t-1] << " " << a[t-2] << " ";
    for(int i=0;i<t-2;i++) cout << a[i] << " ";
    cout << endl;
  }
}