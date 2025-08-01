#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> heights(n);
    for (int i = 1; i <= n; i++)
        cin >> heights[i];
    int timeNeeded  = 0;
    int bhoomisHeight = heights[n];
    for (int i = 1; i < heights.size(); i++)
    {
        if (heights[i] >= bhoomisHeight)
        {
            timeNeeded  = i;
            break;
        }
    }
    (timeNeeded  == 0) ? cout << "0" << '\n' : cout << n - timeNeeded  << '\n';
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