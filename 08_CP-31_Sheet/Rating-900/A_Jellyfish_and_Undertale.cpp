#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll a, b, n;
    cin >> a >> b >> n;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll ans = b;
    for (int i = 0; i < n; i++)
    {
        // if (v[i] < a)
        //     ans += v[i];
        // else
        //     ans += a - 1;
        ans += min(v[i], a - 1);
    }
    cout << ans << '\n';
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
//Time Complextiy - O(n)
//Problem link: https://codeforces.com/problemset/problem/1875/A
/*
Here if the number is less than the maximum timer then I can add into my answer because everytime I use the tool when the timer reached to 1 then I can get my maximum tools efficency. If the tool is greater than or equat to my maximum timer that time I can use the maximum times value. Here the value is greater than or equal my maximum timer that time I have to subtract 1 because already my timer is 1 second then if I add maximum time then it overflow my maximum timer that's why I have to subtract 1.    
*/