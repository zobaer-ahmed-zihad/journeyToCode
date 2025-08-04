#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    string st;
    cin >> st;
    int minimum_cost = 0, greaterCnt = 0, lessCnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (st[i] == '<')
        {
            lessCnt++;
            greaterCnt = 0;
        }
        else
        {
            greaterCnt++;
            lessCnt = 0;
        }
        minimum_cost = max(minimum_cost, greaterCnt);
        minimum_cost = max(minimum_cost, lessCnt);
    }
    cout << minimum_cost + 1 << '\n';
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
//Problem link: https://codeforces.com/problemset/problem/1837/B
//Time Complexity: O(n)