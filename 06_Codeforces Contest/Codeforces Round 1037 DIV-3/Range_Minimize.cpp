#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int op1 = v[n - 1] - v[2];
    int op2 = v[n - 3] - v[0];
    int op3 = v[n - 2] - v[1];
    int minimum = min(op1, op2);
    int final = min(minimum, op3);
    cout << final << endl;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}