#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int dp[N];
bool make_it(int source, int destination)
{
    // base case
    if (source == destination)
        return true;
    if (source > destination)
        return false;

    if (dp[source] != -1)
        return dp[source];

    dp[source] = make_it(source + 3, destination) || make_it(source * 2, destination);

    return dp[source];
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        int n;
        cin >> n;
        if (make_it(1, n))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}