// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n); // array sorting

    while (x--)
    {
        int a;
        cin >> a;
        bool flag = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid_index = (l + r) / 2;
            if (ar[mid_index] == a)
            {
                flag = true;
                break;
            }
            if (a > ar[mid_index])
            {
                l = mid_index + 1;
            }
            else
            {
                r = mid_index - 1;
            }
        }

        (flag == true) ? cout << "found" << endl : cout << "not found" << endl;
        // if (flag == true)
        //     cout << "found" << endl;
        // else
        //     cout << "not found" << endl;
    }

    return 0;
}