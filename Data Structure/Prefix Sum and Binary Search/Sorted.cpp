#include <bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        int ar[n];
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }
        bool flag = false;
        int j = 0;
        for (int i = 1; i < n; i++)
        {
            if (ar[j] <= ar[i])
            {
                j++;
            }
            else
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}