#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int n; cin>>n;
  vector<int> v(n);
  int sum = 0, ans = (n)*(n+1)/2 ;
  f(i,0,n-1){
    cin>>v[i];
    sum+=v[i];
  }
  cout<<ans-sum;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}