#include<bits/stdc++.h>
using namespace std;
int main(){
  long long int n,k;
  cin >> n >> k;
//   cout << n << " " << k << endl;
//   vector<int>res(128,0);
//   long long int a = 0;
//   long long int b;
//   if(k < 128) b = k;
//   else b = 128;
//   for(int i=b-1;i>=0;i--){
//     if(pow(2,a) <= n) {
//         // cout << pow(2,a) << endl;
//         res[i] = 1; 
//     }
//     a++;
//   }
//   long long int out = 0;
//   a = 0;
//   for(int i=b-1;i>=0;i--){
//     out += res[i]*pow(2,a);
//     a++;
//   }
//   cout << out << endl;
    long long int ans = 0;
    cout << (long long int)log2(n) + 1 << endl;
    ans = pow(2,(long long int)log2(n)+1) - 1;
    if(k == 1) cout << n << endl;
    else
    cout << ans << endl;
}