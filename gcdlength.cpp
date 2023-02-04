#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int x,y,z; cin >> x >> y >> z;
    int a,b; 
    a = pow(10,x-1);
    b = pow(10,y-1) + pow(10,z-1);
    cout << a << " " << b << endl;
    // cout << __gcd(a,b) << endl;
  }
}