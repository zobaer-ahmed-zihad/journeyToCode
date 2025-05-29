#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    for (int i = 1; i <= 1000; i++)
    {
        int mul = i * c;
        if (a <= mul && mul <= b)
        {
            flag = true;
            cout << mul;
            break;
        }
    }
    if (!flag)
        cout << "-1";

    return 0;
}