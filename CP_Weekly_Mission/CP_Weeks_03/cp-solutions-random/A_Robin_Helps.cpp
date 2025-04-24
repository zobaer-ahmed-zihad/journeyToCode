#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n>>k;
        int robinHas = 0, getGolds = 0;
        for(int i = 0;i<n; i++)
        {
            int gold;
            cin>>gold;
            if(gold >= k)
            {
                robinHas += gold;
            }else if(gold == 0 && robinHas > 0)
            {
                robinHas--;
                getGolds++;
            }
        }
        cout<<getGolds<<'\n';
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/2014/A