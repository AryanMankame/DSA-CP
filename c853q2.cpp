#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
  while(t--){
    int n,k; cin >> n >> k;
    int f = 0;
    map<int,int>mp;
    vector<vector<int>>range;
    for(int i=0;i<n;i++){
        int a,b; cin >> a >> b;
        range.push_back({a,b});
        for(int j=a;j<=b;j++) mp[j]++;
       if(k >= a and k <= b){
        f++;
        }
    }
    //case1 found in all the ranges
        vector<int>v;
        for(auto i:mp){
            if(i.first != k and i.second >= mp[k]){
                v.push_back(i.first);
            }
        }
        int cnt = v.size();
        // cout << cnt << endl;
        for(auto i:v){
            // cout << i <<  " ";
            for(auto j:range){
                if((i >= j[0] and i <= j[1]) and (k < j[0] or k > j[1])) mp[i]--;
            }
            if(mp[i] < mp[k]) cnt--;
        }
        // cout << cnt << endl;
        if(cnt == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}