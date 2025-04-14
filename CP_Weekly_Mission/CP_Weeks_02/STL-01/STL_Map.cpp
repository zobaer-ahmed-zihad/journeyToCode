#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    map<int, int> mp;
    // mp.insert({10, 20});
    // mp.insert({2, 18});

    mp[20] = 45;
    mp[10] = 60;
    mp[21] = 27;
    mp[7] = 14;
    // mp[20] = 30;
    // cout<<mp[10]<<'\n';
    // cout<<mp[20]<<'\n';

    // for(auto it : mp)
    // {
    //     int key = it.first, value = it.second;
    //     cout << key << " - " << value << '\n';
    // }

    // for (auto [key, value] : mp)
    //     cout << key << " - " << value << '\n';

    // auto it = mp.find(7);
    // if (it == mp.end())
    // {
    //     cout << "Invalid Key" << '\n';
    // }
    // else
    // {
    //     cout << it->first << " " << it->second << '\n';
    // }

    // cout<<mp[50]<<'\n';
    // cout << '\n';
    // auto it = mp.find(10);
    // if (it != mp.end())
    // {
    //     mp.erase(it);
    // }

    for (auto [key, value] : mp)
        cout << key << " - " << value << '\n';

    // auto it = mp.lower_bound(8);
    // cout << it->first << " " << it->second << '\n';
    auto it = mp.upper_bound(10);
    cout << it->first << " " << it->second << '\n';

    return 0;
}