#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int s, t;
    cin >> s >> t;
    int count = 0;
    for (int i = 0; i < 101; i++) // TWO TEST CASE NOT PASSED
    {
        for (int j = 0; j < 101; j++)
        {
            for (int k = 0; k < 101; k++)
            {
                if (i + j + k >= 100 || i * j * k >= 10000)
                    break;
                else if (i + j + k <= s && i * j * k <= t)
                {
                    count++;
                }
            }
        }
    }
    cout << count;

    return 0;
}