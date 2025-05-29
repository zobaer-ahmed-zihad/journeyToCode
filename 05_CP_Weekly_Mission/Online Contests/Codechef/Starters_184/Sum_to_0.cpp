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
        int n;
        cin >> n;
        vector<int> v;
        if (n == 1)
            v.push_back(-1);
        else
        {
            if (n % 2 == 0)
            {
                for (int i = 0; i < n; i++)
                {
                    if (i % 2 == 0)
                    {
                        v.push_back(1);
                    }
                    else
                    {
                        v.push_back(-1);
                    }
                }
            }
            else
            {
                for (int i = 0; i < n - 3; i++)
                {
                    if (i % 2 == 0)
                    {
                        v.push_back(1);
                    }
                    else
                    {
                        v.push_back(-1);
                    }
                }

                v.push_back(2);
                v.push_back(-1);
                v.push_back(-1);
            }
        }
        for (auto val : v)
            cout << val << " ";
        cout << '\n';
    }
    return 0;
}