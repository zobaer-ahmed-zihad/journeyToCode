#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        dq.push_back(val);
    }

    int serejas_point = 0, dimas_point = 0;
    while (!dq.empty())
    {
        if (!dq.empty())
        {
            if (dq.front() <= dq.back())
            {
                serejas_point += dq.back();
                dq.pop_back();
            }
            else
            {
                serejas_point += dq.front();
                dq.pop_front();
            }
        }

        if (!dq.empty())
        {
            if (dq.front() <= dq.back())
            {
                dimas_point += dq.back();
                dq.pop_back();
            }
            else
            {
                dimas_point += dq.front();
                dq.pop_front();
            }
        }
    }
    cout << serejas_point << " " << dimas_point;

    return 0;
}
//problem link: https://codeforces.com/contest/381/problem/A