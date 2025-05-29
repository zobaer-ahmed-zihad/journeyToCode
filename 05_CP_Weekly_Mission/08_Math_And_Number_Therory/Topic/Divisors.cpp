#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // for (int i = 1; i <= n; i++) //O(n)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << " ";
    //     }
    // }
    vector<int> divisors;
    for (int i = 1; i * i <= n; i++) // O(sqrt(n))
    {
        if (n % i == 0)
        {
            divisors.push_back(i);
            if (i != (n / i))
            {
                divisors.push_back(n / i);
            }
        }
    }

    sort(divisors.begin(), divisors.end());
    for (auto value : divisors)
        cout << value << " ";

    return 0;
}