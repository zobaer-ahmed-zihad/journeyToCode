#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int evenCnt = 0, oddCnt = 0;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
        {
           evenCnt++;
        }
    }
    int odd = 101; 
    oddCnt = n - evenCnt;
    if(oddCnt % 2 == 0)
    {
        odd = oddCnt / 2;
    }
    int mn = min(evenCnt, odd);
    cout<<mn<<endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solveTestCase();
    }
    return 0;
}