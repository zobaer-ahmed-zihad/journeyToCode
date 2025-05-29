#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<vector<int>> v(n, vector<int>(n - 1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                int val;
                cin >> val;
                v[i][j] = val;
            }
        }

        deque<int> de;
        int first = v[0][0];
        for (int i = 1; i < n; i++)
        {
            if (first == v[i][0])
            {
                de.push_front(first);
                break;
            }
            else
            {
                de.push_front(v[i][0]);
            }
        }
        cout << de.front() << " ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (v[i][0] != de.front())
                {
                    cout << v[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
//problem link: https://codeforces.com/problemset/problem/1790/C