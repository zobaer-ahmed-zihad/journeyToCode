#include <bits/stdc++.h>
using namespace std;
void solveTestCase()
{
    int n, k;
    cin >> n >> k;
    vector<int> level(n), gold(n);
    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        cin >> level[i];
        p[i].first = level[i];
        p[i].second = i;
    }
    sort(p.begin(), p.end());
    for (int i = 0; i < n; i++)
    {
        cin >> gold[i];
    }
    multiset<int, int> k_value;
    vector<int> ans;
    long long int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int pos = p[i].second; // 5
        ans[i] = sum;
        if (k_value.size() < k)
        {
            sum += gold[i];
            k_value.insert(gold[pos]);
        }
        else
        {
            auto first = k_value.begin();
            int first_value = *first;
            if (gold[pos] > first_value)
            {
                k_value.erase(first);
                sum -= first_value;
                k_value.insert(gold[pos]);
            }
        }
    }
    for (auto v : ans)
        cout << v << " ";
    cout << '\n';
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