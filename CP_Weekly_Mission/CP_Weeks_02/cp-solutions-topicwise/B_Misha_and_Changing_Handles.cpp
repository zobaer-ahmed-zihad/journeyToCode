#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    map<string, string> ans, has;
    while (n--)
    {

        string st1, st2;
        cin >> st1 >> st2;

        if (has.find(st1) != has.end())
        {
            string s = has[st1];
            ans[s] = st2;
            has.erase(st1);
            has[st2] = s;
        }
        else
        {
            ans[st1] = st2;
            has[st2] = st1;
        }
    }
    cout << ans.size() << '\n';
    for (auto [oldHandle, newHandle] : ans)
        cout << oldHandle << " " << newHandle << '\n';

    return 0;
}