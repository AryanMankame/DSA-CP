#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n,k; cin >> n >> k;
    int a = k, b = k + (k/n);
    int c = b/n - a/n;
    while(c > 0){
        a = b; b += c;
        c = b/n - a/n;
    }
    cout << b << endl;
  }
}