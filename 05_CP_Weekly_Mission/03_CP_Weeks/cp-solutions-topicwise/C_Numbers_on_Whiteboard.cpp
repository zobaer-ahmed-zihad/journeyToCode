#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    priority_queue<int> pq;
    for (int i = 1; i <= n; i++)
    {
        pq.push(i);
    }
    int i = n;
    vector<pair<int, int>> v;
    while (i != 1)
    {
        int largest = pq.top();
        pq.pop();
        int second_largest = pq.top();
        pq.pop();
        ll sum = (largest + second_largest + 1) / 2;
        pq.push(sum);
        v.push_back({largest, second_largest});
        i--;
    }
    cout << pq.top() << '\n';
    for (auto val : v)
    {
        cout << val.first << " " << val.second << '\n';
    }
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
//Problem link: https://codeforces.com/contest/1430/problem/C
//Time complexity - O(n)