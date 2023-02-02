#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
//   int oc = (t+1)/2;
  if(t == 1){
    cout << "No" << endl;
  }
  else{
    long long sum = (long long int)(t*(t+1)) / 2;
    int find = -1;
    for(int i=2;i<=t;i++){
        if((sum - i) % i == 0){
            find = i; break;
        }
    }
    if(find == -1) cout << "No" << endl;
    else{
        cout << "Yes" << endl;
        cout << 1 << " " << find << endl;
        cout << t-1 << " ";
        for(int i=1;i<=t;i++){
            if(find == i) continue;
            cout << i << " ";
        }
        cout << endl;
    }
  }
}
    // if(oc % 2 == 0){
    //     cout << "Yes" << endl;
    //     cout << t / 2 << " ";
    //     for(int i=2;i<=t;i+=2) cout << i << " ";
    //     cout << endl;
    //     cout << oc << " ";
    //     for(int i=1;i<=t;i+=2) cout << i << " ";
    // }
    // else cout << "No" << endl;