#include<bits/stdc++.h>
using namespace std;
int main(){
  string st;
  cin >> st;
  long long int b,s,c; cin >> b >> s >> c;
  long long int cb,cs,cc; cin >> cb >> cs >> cc;
  long long int amt; cin >> amt;
  long long int rb = 0,rs = 0,rc = 0; 
  for(auto i:st){
    if(i == 'B') rb++;
    else if(i == 'S') rs++;
    else rc++;
  }
  long long int cnt = 0;
  long long int p,q,r;
  if(rb == 0) p = INT_MAX;
  else p= b/rb;
  if(rs == 0) q = INT_MAX;
  else q = s/rs;
  if(rc == 0) r = INT_MAX;
  else r = c / rc;
  cnt = min(p,min(q,r));
  b -= cnt*rb; s -= cnt*rs; c -= cnt*rc;
  // cout << b << " " << s << " " << c << " " << amt << " " << cnt << endl;
  //adding some ingredients to our inventory and making that one extra burger
  int zc = 0;
  do{
    zc = 0;
    if(b < rb){
      amt -= cb*(rb-b);
      b = rb;
    }
    if(s < rs){
      amt -= cs*(rs-s);
      s = rs;
    }
    if(c < rc){
      amt -= cc*(rc-c);
      c = rc;
    }
    b -= rb; s -= rs; c -= rc;
    cnt += 1;
    if(b == 0) zc++;
    if(s == 0) zc++;
    if(c == 0) zc++;
  }
  while(zc < 2);
  // cout << b << " " << s << " " << c << " " << amt << " " << cnt << endl;
  //Now checking who is having more and whom to add to continue making
  if(b > 0){
    long long int cst_rem = cs*rs + cc*rc;
    long long int l;
    if(rb == 0) l =INT_MAX;
    else l = b / rb;
    long long int to_make = min(l,amt/cst_rem);
    cnt += to_make;
    b -= rb*to_make; 
    amt -= to_make*cst_rem;
    if(b <= rb){
      if(cst_rem + (rb-b)*cb <= amt){
        cnt += 1;
        amt -= (cst_rem + (rb-b)*cb);
        b = 0, c = 0,s = 0;
        cnt += amt / (rb*cb + rs*cs + rc*cc);
      }
    }
  }
  else if(s > 0){
    long long int cst_rem = cb*rb + cc*rc;
    long long int l;
    if(rs == 0) l = INT_MAX;
    else l = s / rs;
    long long int to_make = min(l,amt/cst_rem);
    cnt += to_make;
    s -= rs*to_make; 
    amt -= to_make*cst_rem;
    if(s <= rs){
      if(cst_rem + (rs-s)*cs <= amt){
        cnt += 1;
        amt -= (cst_rem + (rs-s)*cs);
        b = 0, c = 0,s = 0;
        cnt += amt / (rb*cb + rs*cs + rc*cc);
      }
    }
  }
  else {
    long long int cst_rem = cs*rs + cb*rb;
    long long int l;
    if(rc == 0) l = INT_MAX;
    else l = c / rc;
    long long int to_make = min(l,amt/cst_rem);
    cnt += to_make;
    c -= rc*to_make; 
    amt -= to_make*cst_rem;
    // cout << b << " " << s << " " << c << " " << amt << " " << cnt << endl;
    if(c <= rc){
      if(cst_rem + (rc-c)*cc <= amt){
        cnt += 1;
        amt -= (cst_rem + (rc-c)*cc);
        // cout << b << " " << s << " " << c << " " << amt << " " << cnt << endl;
        b = 0, c = 0,s = 0;
        cnt += amt / (rb*cb + rs*cs + rc*cc);
      }
    }
  }
  cout << cnt << endl;
}