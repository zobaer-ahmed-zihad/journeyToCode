#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    long long int Fibonacci[n + 1];
    Fibonacci[0] = 0;
    Fibonacci[1] = 1;
    Fibonacci[2] = 1;
    Fibonacci[3] = 2;

    for (long long int i = 4; i <= n; i++)
    {
        Fibonacci[i] = Fibonacci[i - 1] + Fibonacci[i - 2] + Fibonacci[i - 3] + Fibonacci[i - 4];
    }
    cout << Fibonacci[n];

    return 0;
}