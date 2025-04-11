#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    long long int even_sum = 0;
    long long int odd_sum = 0;
    long long int ar[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
            even_sum += val;

        if (val % 2 == 1)
        {
            odd_sum += val;
            v.push_back(val);
        }
    }
    int min_value;
    if (!v.empty())
        min_value = *min_element(v.begin(), v.end());

    if (odd_sum % 2 == 0)
        cout << even_sum + odd_sum;
    else
    {
        odd_sum -= min_value;
        cout << even_sum + odd_sum;
    }
    return 0;
}

//problem link: https://codeforces.com/problemset/problem/621/A