#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> towers;
    for (int i = 0; i < n; i++)
    {
        ll cube;
        cin >> cube;
        auto it = upper_bound(towers.begin(), towers.end(), cube);
        if (it == towers.end())
        {
            towers.push_back(cube);
        }
        else
        {
            *it = cube;
        }
    }
    cout << towers.size() << '\n';
    return 0;
}
//problem link: https://cses.fi/problemset/task/1073/