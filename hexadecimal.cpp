#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  string s = to_string(t);
  int i = 0;
  set<string>st;
  while(i < s.length()){
    if(s[i] == '1'){
        string temp = "";
        int j = i;
        while(j < s.length() and s[j] <= '1') {
            temp += s[j];
            j++;
            st.insert(temp);
        }
    }
    i++;
  }
  cout << st.size() << endl;
}