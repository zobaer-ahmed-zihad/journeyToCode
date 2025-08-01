#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<ll> need(n), have(n);
    for (int i = 0; i < n; i++)
    {
        cin >> need[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> have[i];
    }
    ll cost = 0;
    for (int i = 0; i < n; i++)
    {
        if (need[i] > have[i])
        {
            cost += need[i] - have[i];
        }
    }
    cout << cost << endl;
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