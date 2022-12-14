#include <bits/stdc++.h>
#define int long long
#define f(k, s, e) for (int k = s; i < e; i++)
#define fi(k, s, e) for (int k = s; i <= e; i++)
using namespace std;
void solve()
{
    string s;
    cin >> s;
    map<char, int> mp;
    int ans = INT_MIN;
    f(i, 0, s.length())
    {
        if(i==0){
           mp[s[i]]++;
            ans = max(ans, mp[s[i]]);
            continue;
        }
        if (s[i] == s[i - 1])
        {
            mp[s[i]]++;
            ans = max(ans, mp[s[i]]);
        }
        else mp[s[i]] = 1;
    }
    cout << ans;
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}