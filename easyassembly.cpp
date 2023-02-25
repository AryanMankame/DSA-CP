#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  vector<vector<int>>v(t);
  priority_queue<int>st;
  for(int i=0;i<t;i++){
    int n; cin >> n;
    for(int j=0;j<n;j++){
        int a; cin >> a;
        st.push(a);
        v[i].push_back(a);
    }
  }
//   for(auto i:v){
//     for(auto j:i) cout << j << " ";
//     cout << endl;
//   }
  int s = 0,c = 0;
  while(!st.empty()){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[i].size();j++){
            if(v[i][j] == st.top()){
                int srt = j,en = j;
                while(srt >= 0 and !st.empty() and v[i][srt] == st.top()){
                    cout << st.top() << endl;
                    st.pop(); srt--;
                }
                vector<int>a,b;
                for(int k=0;k<srt;k++){
                    a.push_back(v[i][k]);
                }
                for(int k=en+1;k<v[i].size();k++){
                    b.push_back(v[i][k]);
                }
                // v.push_back(a);
                // v[i].clear();
                for(auto k:b) v[i].push_back(k);
            }
        }
    }
    // st.pop();
  }
  for(auto i:v){
    for(auto j:i) cout << j << " ";
    cout << endl;
  }
}