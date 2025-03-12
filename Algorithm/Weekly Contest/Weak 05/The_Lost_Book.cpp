#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    long long int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    long long int target;
    cin >> target;
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == target)
        {
            flag = true;
            cout << i;
        }
    }
    if (flag == false)
        cout << "-1";

    return 0;
}