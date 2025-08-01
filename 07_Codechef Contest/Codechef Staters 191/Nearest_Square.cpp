#include <bits/stdc++.h>
using namespace std;
void zihad_solve()
{
    int n;
    cin >> n;
    int largest = 0;
    if (n == 1)
        cout << "1" << '\n';
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (i * i >= n)
            {
                largest = i;
                break;
            }
        }
        cout << (largest - 1) * (largest - 1) << '\n';
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
        zihad_solve();
    }
    return 0;
}