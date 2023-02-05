#include<bits/stdc++.h>
using namespace std;
int main(){
  int t; cin >> t;
//   int a[(int)pow(10,6)];
  int ap[10000]; int bp[10000];
  ap[0] = 1, bp[0] = 5;
  for(int i=1;i<10000;i++){
    ap[i] = ap[i-1] + 8; bp[i] = bp[i-1] + 8;
  }
  while(t--){
    int n; cin >> n;
    int a=0,b=0;
    int turn = 0;
    int ac = 0,bc = 0;
    int i = 0;
    while(i < n){
        if(turn == 0){
            if(i + ap[ac] <= n)
            a += ap[ac];
            else{
                a += n - i;
                break;
            }
            i += ap[ac];
            ac++;
            turn = 1;
        }
        else{
            if(i + bp[bc] <= n)
            b += bp[bc];
            else {
                b += n-i; break;
            }
            i += bp[bc];
            bc++;
            turn = 0;
        }
    }
    cout << a << " " << b << endl;
  }
}