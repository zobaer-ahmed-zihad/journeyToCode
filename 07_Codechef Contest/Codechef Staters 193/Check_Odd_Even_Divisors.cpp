#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    ll a, b;
    cin >> a >> b;
    int evenCnt = 0, oddCnt = 0;
    bool flag = false;
    for (int n = 1; n <= 1000; n++)
    {

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
        if (a == oddCnt && b == evenCnt)
        {
            flag = true;
            break;
        }
    }
    (flag) ? cout << "Yes" << '\n' : cout << "No" << '\n';
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