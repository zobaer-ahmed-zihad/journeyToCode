#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    map<int, int> fre;
    for(int i = 0; i<n; i++)
    {
        int num;
        cin>>num;
        fre[num]++;
    }
    int max_fre = 0;
    for(auto cnt : fre)
    {
        if(cnt.second > max_fre)
        {
            max_fre = cnt.second;
        }
    }
    cout<<max_fre<<endl;

    return 0;
}
//problem link: https://codeforces.com/contest/903/problem/C