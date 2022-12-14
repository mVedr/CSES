#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<char, int> &a,
         pair<char, int> &b)
{
    return a.second > b.second;
}

void sort(map<char, int> &M)
{
    vector<pair<char, int>> A;
    int c = 0;
    for (auto &it : M)
    {
        if (it.second % 2 == 1)
            c++;
        if (c > 1)
        {
            cout << "NO SOLUTION";
            return;
        }
        A.push_back(it);
    }
    sort(A.begin(), A.end(), cmp);
    stack<char> st;
    queue<char> q;
    for (auto &it : A)
    {
        int k = it.second / 2;
       // cout << k << "  : K ";
        if (k >= 1)
        {
            int kk =k,tk=k;
            
            while (k--)
            {
               // cout << "st .." << endl;
               
                st.push(it.first);
            }
            while (kk--)
            {
               // cout << "q .." << endl;
                q.push(it.first);
            }
            it.second -= 2 * tk;
        }
    }
    for (auto &it : A)
    {
        if (it.second == 1)
        {
            st.push(it.first);
        }
    }
    string str = "";
    while (!q.empty())
    {
        str += q.front();
       // cout << q.front() << endl;
        q.pop();
    }
    while (!st.empty())
    {
        str+= st.top();
        //cout << st.top() << endl;
        st.pop();
    }
    cout<<str;
}
void solve()
{
    string str;
    cin >> str;
    map<char, int> mp;
    for (auto it : str)
    {
        mp[it]++;
    }
    sort(mp);
}
int main()
{
    solve();
    return 0;
}