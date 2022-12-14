#include<bits/stdc++.h>
#define int long long
#define f(k,s,e) for(int k=s;i<e;i++)
#define fi(k,s,e) for(int k=s;i<=e;i++)
#define MOD 1000000007
using namespace std;

long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2);
    res = (res*res)%MOD;
    if (b % 2)
        return (res * a)%MOD;
    else
        return res;
}

void solve(){
  int n; cin>>n;
  cout<<binpow(2,n);
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(0); 
    cout.tie(0);
    solve();
    return 0;
}