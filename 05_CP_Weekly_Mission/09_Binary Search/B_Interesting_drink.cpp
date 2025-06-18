#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int key, l = 0, r = n - 1, mid, ans = -1;
        cin >> key;
        while (l <= r)
        {
            mid = l + (r - l) / 2;
            if (key >= v[mid])
            {
                ans = mid;
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        cout << ans + 1 << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/problemset/problem/706/B