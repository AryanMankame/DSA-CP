#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m; cin >> n;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    cin >> m; int b[m];
    for(int i=0;i<m;i++) cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    vector<vector<int>>v(n,vector<int>(m,0));
    if(abs(a[0] - b[0]) <= 1) v[0][0] = 1;
    for(int i=1;i<m;i++){
        // if(i < min(m,n) and a[i] == b[i])
        if(v[0][i-1] == 1 or abs(a[0] - b[i]) <= 1) 
        v[0][i] = 1;
    }
    for(int i=1;i<n;i++){
        // if(i < min(m,n) and a[i] == b[i])
        if(v[i-1][0] == 1 or abs(a[i] - b[0]) <= 1)
        v[i][0] = 1;
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(abs(a[i] - b[j]) <= 1) v[i][j] = v[i-1][j-1] + 1;
            // else if(abs(a[i] - b[j]) <= 1) v[i][j] = maxv[i-1][j-1] + 1;
            else v[i][j] = max(v[i-1][j], v[i][j-1]);
        }
    }
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout << v[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    cout <<  v[n-1][m-1] << endl; 
}