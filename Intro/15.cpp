#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
int factorial(int n)
{
    return (n==1 || n==0) ? 1: n * factorial(n - 1);
}
void solve(){
  string str; cin>>str;
  string my = str;
  sort(str.begin(),str.end());
  int count=0;
  do{
      count++;
  }while(next_permutation(str.begin(),str.end()));
  cout<<count<<endl;
 sort(my.begin(),my.end());
 do{
     cout<<my<<endl;
 }while(next_permutation(my.begin(),my.end()));
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}