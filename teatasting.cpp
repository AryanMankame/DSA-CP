#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n],b[n];
    for(int i=0;i<n;i++) cin >> a[i];
    for(int i=0;i<n;i++) cin >> b[i];
    vector<long long int>c(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i;j++){
            int temp = min(a[j],b[j+i]);
            c[j+i] += temp;
            a[j] -= temp;
        }
    }
    for(int i=0;i<n;i++) cout << c[i] << " ";
    cout << endl;
  }
}