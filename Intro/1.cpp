#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int n; cin>>n;
  
  while(n!=1){
    cout<<n<<" ";
    if(n%2==1){
        n = 3*n+1;
    }else n= n/2;
  }
  cout<<n<<" ";
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}