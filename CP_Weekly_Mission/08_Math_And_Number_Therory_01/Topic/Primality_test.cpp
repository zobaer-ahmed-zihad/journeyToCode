#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        // cout<<i<<" ";
        if (n / i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    (isPrime(n)) ? cout << "Prime" : cout << "Not Prime";
    
    return 0;
}