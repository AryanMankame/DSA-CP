#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n,m; cin >> n >> m;
    string s,t; cin >> s >> t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    bool pos = true;
    for(int i=0;i<s.size()-1;i++){
        if(s[i] == s[i+1]) {
            if(s[0] == t[0]){
                pos = false;
                break;
            }
            string temp = s.substr(0,i);
            reverse(temp.begin(),temp.end());
            t = s[i] + temp  +  t;
            s = s.substr(i+1);
            i = -1;
        }
    }
    for(int i=0;i<t.size()-1;i++){
        if(t[i] == t[i+1]) {
            // cout << s << " " << t << endl;
            if(s[0] == t[0]){
                pos = false;
                break;
            }
            string temp = t.substr(0,i);
            reverse(temp.begin(),temp.end());
            s = t[i] + temp  +  s;
            t = t.substr(i+1);
            i = -1;
            // cout << s << " => " << t << endl;
        }
    }
    if(pos == true) cout << "YES" << endl;
    else cout << "NO" << endl;
  }
}
