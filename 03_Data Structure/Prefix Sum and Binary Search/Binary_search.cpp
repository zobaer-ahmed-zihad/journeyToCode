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
    int l, r;
    l = 0;
    r = n - 1;
    bool flag = false;
    
    //Binary search
    while (l <= r)
    {
        int mid_index = (l + r) / 2;
        if (ar[mid_index] == x)
        {
            flag = true;
            break;
        }
        if (x > ar[mid_index])
        {
            l = mid_index + 1;
        }
        else
        {
            r = mid_index - 1;
        }
    }
    if (flag == true)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}