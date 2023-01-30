#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i=0;i<n;i++) cin >> a[i];
        map<int,int>mp;
        set<int>st;
        for(int i=0;i<n;i++) {
            mp[a[i]]++;
            st.insert(a[i]);
        }
        int ans = 0;
        for(auto i:st){
            if(mp[i] > mp[i-1]) {
                ans += mp[i] - mp[i-1];
                // mp[a[i]] = 0;
            }
        }
        cout << ans << endl;
    }
}