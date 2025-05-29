#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> v[i];
    // }
    // vector<int> v;
    // for (int i = 0; i < n; i++)
    // {
    //     int val;
    //     cin >> val;
    //     v.push_back(val);
    // }
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << " ";
    // }
    // v.pop_back();
    // cout<<v.front()<<'\n';
    // cout<<v.back()<<'\n';
    // v.clear();
    // cout<<v.empty()<<'\n';
    // cout<<v.size()<<'\n';

    // vector<int> v(5, 2);
    // vector<int>v;
    // v.assign(7, 5);
    // v.resize(3, 7);

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    // auto it = v.begin() + 1;
    // auto it = v.end() - 1;
    // cout<<*it<<'\n';
    // for(auto it = v.begin(); it != v.end(); it++)
    // {
    //     cout<<*it<<" ";
    // }
    // for (auto it = v.rbegin(); it != v.rend(); it++)
    // {
    //     cout << *it << " ";
    // }
    // reverse(v.begin(), v.end()); // reverse vector
    // sort(v.begin(), v.end()); // Acending order sort
    // sort(v.begin(), v.end(), greater<int>()); //Decending order sort
    // sort(v.begin(), v.end() - 1);
    // for (auto value : v)
    // {
    //     cout << value << " ";
    // }

    auto min_value = min_element(v.begin(), v.end());
    cout << *min_value << '\n';
    auto max_value = max_element(v.begin(), v.end());
    cout << *max_value << '\n';
    int maxElementPosition = max_value - v.begin();
    cout << maxElementPosition << '\n';
    return 0;
}