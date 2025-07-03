#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++) //O(n)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++) //O(n)
    {
        if (v[i] == 1)
            v[i]++;
    }
    for (int i = 1; i < n; i++) //O(n)
    {
        if (v[i] % v[i - 1] == 0)
        {
            v[i]++;
        }
    }
    for (auto val : v)
        cout << val << " ";
    cout << '\n';
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
// Time complexity - O(n)
// Problem link: https://codeforces.com/problemset/problem/1794/B
/*
Here 1 has the super power to divide all numbers. Without 1 it's not possible to divide any conjecutive numbers. So, that's why we increment the value 1 if v[i] == 1. 
Then it becomes 2. Now you can simplily run the actual operations. If v[i] is divisible by v[i-1] then simply increase the value 1 to v[i]. Then it is not divisible by v[i-1] because we know that any conjecutive numbers isn't divisible by a single number without 1.
*/