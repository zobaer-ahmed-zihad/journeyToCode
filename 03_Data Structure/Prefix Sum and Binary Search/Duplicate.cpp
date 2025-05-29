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
    int j = 0;
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        if (ar[j] == ar[i])
        {
            flag = true;
            break;
        }
        else
        {
            j++;
        }
    }

    if (flag == true)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}