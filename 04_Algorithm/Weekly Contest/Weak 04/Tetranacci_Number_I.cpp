#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
int save[N];
int fibo(int n)
{
    // if (n == 0 || n == 1)
    //     return 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1 || n == 2)
    {
        return 1;
    }
    else if (n == 3)
    {
        return 2;
    }

    if (save[n] != -1)
    {
        return save[n];
    }
    int ans1 = fibo(n - 1);
    int ans2 = fibo(n - 2);
    int ans3 = fibo(n - 3);
    int ans4 = fibo(n - 4);
    save[n] = ans1 + ans2 + ans3 + ans4;

    return save[n];
}
int main()
{
    int n;
    cin >> n;
    memset(save, -1, sizeof(save)); // set -1
    int result = fibo(n);
    cout << result << endl;
    return 0;
}