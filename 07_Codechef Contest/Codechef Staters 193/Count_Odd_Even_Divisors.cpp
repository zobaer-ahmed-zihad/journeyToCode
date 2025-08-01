#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int solveTestCase(int n, int a, int b)
{
    int evenCnt = 0, oddCnt = 0;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            (i % 2 == 0) ? evenCnt++ : oddCnt++;
            if (i != (n / i))
            {
                ((n / i) % 2 == 0) ? evenCnt++ : oddCnt++;
            }
        }
    }
    if (oddCnt == a && evenCnt == b)
    {
        return 1;
    }
    else
    {
        return 0;
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
        int a, b, val;
        cin >> a >> b;
        for (int n = 1; n <= 1000; n++)
        {
            val = solveTestCase(n, a, b);
        }
        (val == 1) ? cout << "Yes" << '\n' : cout << "No" << '\n';
    }
    return 0;
}