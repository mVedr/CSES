#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int n; cin>>n;
  int sum = 0 ;
  int f = 5;
  do{
    sum += n/f;
    f = f*5;
  }while(n/f!=0);
  cout<<sum;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}