#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    //FIRST APPROACH THAT I PREFER
    int minimumTime = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > minimumTime)
            minimumTime++;
    }
    cout<<minimumTime<<'\n';
 
    //UPSOLVE CLASS APPROACH 
    // int minimumTime = n;
    // for (int i = 0; i < n; i++)
    // {
    //     int time = v[i] + n - (i + 1);
    //     minimumTime = min(minimumTime, time);
    // }
    // cout << minimumTime << '\n';
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}