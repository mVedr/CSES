#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int n; cin>>n;
  vector<int> v(n);
  int ans = 0;
  f(i,0,n){
    cin>>v[i];
    if(i==0) {
       continue;
    }
    if(v[i]<v[i-1]) {
        ans += abs(v[i]-v[i-1]);
        v[i]=v[i-1];
        }
  }
  cout<<ans;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}