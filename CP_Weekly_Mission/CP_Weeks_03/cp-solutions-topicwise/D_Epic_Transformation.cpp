#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            long long int val;
            cin >> val;
            mp[val]++;
        }
        priority_queue<int> pq;
        for (auto [value, occurrence] : mp)
            pq.push(occurrence);
        while (!pq.empty())
        {
            if (pq.size() < 2)
                break;
            int x, y;
            x = pq.top();
            pq.pop();
            y = pq.top();
            pq.pop();
            x--;
            y--;
            if (x > 0)
                pq.push(x);
            if (y > 0)
                pq.push(y);
        }
        int cnt = 0;
        while (!pq.empty())
        {
            cnt += pq.top();
            pq.pop();
        }
        cout << cnt << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1506/problem/D