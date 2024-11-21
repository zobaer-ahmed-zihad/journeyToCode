#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;
    int min = INT_MAX;
    while (test_case != 0)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }

        for (int i = 1; i < n; i++)
        {

            for (int j = i + 1; j <= n; j++)
            {
                int sum = 0;
                sum = a[i] + a[j] + j - i;
                if (min > sum)
                {
                    min = sum;
                }
            }
        }
        test_case--;
    }

    cout << min;
    return 0;
}