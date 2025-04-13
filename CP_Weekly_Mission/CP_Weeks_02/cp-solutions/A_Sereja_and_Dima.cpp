#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    sort(ar, ar + n, greater<int>());
    int serejas_point = 0, dimas_point = 0;

    for (int i = 0; i < n; i = i + 2)
    {
        serejas_point += ar[i];
    }
    for (int i = 1; i < n; i = i + 2)
    {
        dimas_point += ar[i];
    }
    cout << serejas_point << " " << dimas_point;
    return 0;
}