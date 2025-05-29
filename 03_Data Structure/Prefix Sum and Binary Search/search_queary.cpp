#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);
    int q;
    cin >> q;

    while (q--)
    {
        int f;
        cin >> f;
        bool flag = false;
        int l = 0, r = n - 1;

        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (ar[mid] == f)
            {
                flag = true;
                break;
            }
            if (f > ar[mid])
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        if(flag == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }

    return 0;
}