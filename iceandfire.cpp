#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n; cin >> n;
    string s; cin >> s;
    int prev = 0;
    char last = '=';
    int len = 0;
    for(int i=0;i<n-1;i++){
        len++;
        if(s[i] == last){
            cout << prev << " ";
        }
        else{
            cout << len << " ";
            prev = len;
        }
        last = s[i];
    }
    cout << endl;
  }
}