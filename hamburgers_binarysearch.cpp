#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; t = 1;
  while(t--){
    string s; cin >> s;
    int b = 0,su = 0,c = 0;
    for(auto i:s){
        if(i == 'B') b++;
        else if(i == 'S') su++;
        else c++;
    }
    int nb,ns,nc; cin >> nb >> ns >> nc;
    int pb,ps,pc; cin >> pb >> ps >> pc;
    long long int rub; cin >> rub;
    long long int l = 0,r = 2*1e13;
    while(l < r and l >= 0){
        long long int mid = l-(l-r)/2;
        // cout << l << " " << r << " " << mid << endl;
        long long int rb = (long long int)mid*b-nb,rs = (long long int)mid*su-ns,rc = (long long int)mid*c-nc;
        if(rb < 0) rb = 0;
        if(rs < 0) rs = 0;
        if(rc < 0) rc = 0;
        // cout << rb << " => " << rs << " => " << rc << " => " << rub  - (rb*pb + rs*ps + rc*pc) << endl;
        if(rub  - (rb*pb + rs*ps + rc*pc) >= 0) l = mid+1;
        else r = mid; 
    }
    cout << l-1 << endl;
    // bool cg = 200000000001 > 429496730;
    // cout << cg << endl;
  }
}