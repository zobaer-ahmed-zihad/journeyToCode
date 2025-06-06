#include <bits/stdc++.h>
#define ll long long
#define pi pair<int, int>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ar(n);
        vector<int> freq(10005);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            freq[ar[i]]++;
        }

        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (freq[i] == 0)
            {
                count++;
            }
        }
        if (count > k)
        {
            cout << "NO" << '\n';
        }
        else
        {
            cout << "YES" << '\n';
        }
    }
    return 0;
}