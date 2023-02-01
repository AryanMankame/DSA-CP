#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    int a[n];
    int s = 0;
    for(int i=0;i<n;i++) {
        cin >> a[i];
        s += a[i];
    }
    bool y = false;
    bool y1 = false;
    // if(n == 1){

    // }
    for(int i=1;i<n;i++){
        if(a[i] == -1 and a[i-1] == -1){
            y = true; break;
        }
        else if((a[i] == -1 and a[i-1] == 1) or (a[i] == 1 and a[i-1] == -1)){
            y1 = true;
        }

    }
    if(y == true) cout << s + 4 << endl;
    else if(y1 == true) cout << s << endl;
    else cout << s-4 << endl;
  }
}