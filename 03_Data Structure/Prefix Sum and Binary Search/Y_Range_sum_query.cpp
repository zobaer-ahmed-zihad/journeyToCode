#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, pair;
    cin >> n >> pair;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    while (pair != 0)
    {
        int l, r, sum = 0;
        cin >> l >> r;
        for (int i = l - 1; i <= r - 1; i++)
        {
            sum += ar[i];
        }
        cout << sum << endl;
        pair--;
    }
    return 0;
}