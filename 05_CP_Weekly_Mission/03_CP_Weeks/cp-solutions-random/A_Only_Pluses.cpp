#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    priority_queue<int, vector<int>, greater<int>> pq;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        pq.push(a);
        pq.push(b);
        pq.push(c);

        for (int i = 0; i < 5; i++)
        {
            if (!pq.empty())
            {
                int val = pq.top();
                pq.pop();
                val++;
                pq.push(val);
            }
        }
        int maximum_amount = 1;
        while (!pq.empty())
        {
            int val = pq.top();
            maximum_amount *= val;
            pq.pop();
        }
        cout << maximum_amount << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/contest/1992/problem/A