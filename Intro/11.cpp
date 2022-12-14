#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
using namespace std;
void solve(){
  int t; cin>>t;
  while(t--){
    int a,b;
      cin >> a >> b;
        cout << ((a + b) % 3 == 0 && (min(a, b) * 2 >= max(a, b)) ? "YES" : "NO") << endl;
  }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}