#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;

        if (n == x)
        {
            for (int i = 0; i < n; i++)
            {
                cout << i << " ";
            }
            cout << '\n';
        }
        else
        {
            for (int i = x + 1; i < n; i++)
            {
                cout << i << " ";
            }
            for (int i = 0; i < x; i++)
            {
                cout << i << " ";
            }
            cout << x << endl;
        }
    }

    return 0;
}