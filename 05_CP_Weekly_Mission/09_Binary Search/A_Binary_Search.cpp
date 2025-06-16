#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < k; i++)
    {
        int l = 0, r = n - 1, mid;
        int key;
        cin >> key;
        bool found = false;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (v[mid] == key)
            {
                found = true;
                break;
            }
            else if (v[mid] < key)
            {
                l = mid + 1;
            }
            else
                r = mid - 1;
        }
        (found) ? cout << "YES" << '\n' : cout << "NO" << '\n';
    }

    return 0;
}
//problem link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A