#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        long long int song;
        cin >> song;
        s.insert(song);
    }
    cout << s.size() << '\n';
    return 0;
}