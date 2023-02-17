#include<bits/stdc++.h>
using namespace std;
long long int val(long long int i,long long int k){
    // if(i == 1) return k;
    long long int check = k*(k-1)/2;
    long long int c1 = (k-i)*(k-i-1)/2;
    return check - c1;
}
int main(){
    long long int n,k; cin >> n >> k;
    long long int l = 1, r = k-1;
    long long int c = k*(k-1)/2;
    int ans = -1;
    while(l <= r){
        long long int mid = l - (l-r)/2;
        // cout << l << " " << r << " " << mid << " ";
        long long int req = val(mid,k); 
        // cout << req << endl;   
        if(req >= n-1) {
            ans = mid;
            r = mid-1;
        }
        else l = mid + 1;
    }
    if(n == 1) cout << 0 << endl;
    else
    cout << ans << endl;
}