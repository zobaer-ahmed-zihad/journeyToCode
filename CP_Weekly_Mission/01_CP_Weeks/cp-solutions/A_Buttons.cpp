//https://atcoder.jp/contests/abc124/tasks/abc124_a?lang=en
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int sum = 0;
    for (int i = 1; i <= 2; i++)
    {
        if (a < b)
        {
            sum += b;
            b--;
        }
        else
        {
            sum += a;
            a--;
        }
    }
    cout << sum;

    return 0;
}