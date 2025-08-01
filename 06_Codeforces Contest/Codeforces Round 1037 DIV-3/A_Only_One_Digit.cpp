#include <bits/stdc++.h>
using namespace std;
#define ll long long int

void solveTestCase()
{
    string st;
    cin >> st;
    char ch = *min_element(st.begin(), st.end());
    cout << ch << '\n';
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