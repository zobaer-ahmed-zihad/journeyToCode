#include <bits/stdc++.h>
using namespace std;
void solve(int ar[], int a, int b, int sum)
{
    for (int i = a; i <= b; i++)
    {
        sum += ar[i];
    }
    cout << sum << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    int ar[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> ar[i];
    }
    while (q--)
    {
        int sum = 0;
        int a, b;
        cin >> a >> b;
        solve(ar, a, b, sum);
    }

    return 0;
}