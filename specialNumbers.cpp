#include<bits/stdc++.h>
using namespace std;
int m = 1000000000+7;
long long power(long long a, long long b, long long m) {
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
long long int val(int i,int n){
    // if(i == 1) return 0;
    long long int p = power(n,(long long int)log2(i),m);
    // cout << "P => " << (long long int)log2(i) << " => " << p << endl;
    return p;
}
int main(){
  int t; cin >> t;
  while(t--){
    int n,k; cin >> n >> k;
    long long int s = 0;
    while(k){
        long long int nt = power(2,(long long int)log2(k),m);
        // cout << k << " => " << log2(k) << " => " << nt << endl;
        s = (s + val(nt,n))%m;
        k -= nt;
    }
    cout << s << endl;
  }
}