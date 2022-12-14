#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; i < e; i++)
#define fi(k, s, e) for (int k = s; i <= e; i++)
using namespace std;
void solve()
{
    int n;
    cin >> n;
    queue<int> q1, q2;
    fi(i, 1, n)
    {
        if (i % 2 == 0)
            q1.push(i);
        else
            q2.push(i);
    }
    vector<int> ans;
    while(!q1.empty()){
        ans.push_back(q1.front());
        q1.pop();
    }cout<<endl;
    while(!q2.empty()){
        ans.push_back(q2.front());
            q2.pop();
    }
    if(ans.size()==1){
        cout<<1;
        return;
    }
    for(int i=0;i<ans.size();i++){
        if(abs(ans[i]-ans[i+1])==1){
            cout<<"NO SOLUTION";
            return;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}