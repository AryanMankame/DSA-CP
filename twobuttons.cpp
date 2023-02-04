#include<bits/stdc++.h>
using namespace std;
// int u_min = INT_MAX;
// int solve(int n,int m,int steps){
//     // cout << n << " " << +m << " " << steps << endl;
//     if(steps > u_min or n < 0) return INT_MAX;
//     if(n == m) return u_min = min(u_min,steps);
//     else if(n > m) return u_min = min(u_min,steps + n - m);
//     int s1 = solve(n*2,m,steps+1);
//     int s2 = solve(n-1,m,steps+1);
//     u_min = min(u_min,min(s1,s2));
//     return min(s1,s2);
// }

int main(){
//   int t; cin >> t;
  int n,m; cin >> n >> m;
  int s = 0;
  while(m > n){
    if(m % 2 == 1) m += 1;
    else m /= 2;
    s++;
  }
  cout << s + n - m << endl;
}