#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // map<vector<int>, int> mp;
    // vector<int> v;
    // v.push_back(7);
    // v.push_back(3);
    // v.push_back(9);
    // v.push_back(2);
    // mp[v] = 10;
    // for(auto [x , y] : mp)
    // {
    //     cout<<y<<endl;
    //     for(auto value : x)
    //     {
    //         cout<<value<< " ";
    //     }
    // }
    map<int, set<int>> mp;
    set<int> s1;
    s1.insert(7);
    s1.insert(5);
    s1.insert(11);
    s1.insert(3);

    set<int> s2;
    s2.insert(9);
    s2.insert(5);
    s2.insert(17);
    s2.insert(6);

    set<int> s3;
    s3.insert(8);
    s3.insert(2);
    s3.insert(7);
    s3.insert(14);

    mp[4] = s1;
    mp[11] = s2;
    mp[9] = s3;

    for (auto [key, value] : mp)
    {
        cout << key << " -> ";
        for (auto val : value)
        {
            cout << val << " ";
        }
        cout << '\n';
    }
    int x = 10, y = 7;
    auto LB1 = mp.lower_bound(x);
    if (LB1 != mp.end())
    {
        int key = LB1->first;
        cout << "Lower bound key : " << key << "\n";
        auto LB2 = mp[key].lower_bound(y);
        if (LB2 != mp[key].end())
        {
            cout << "Lower bound value : " << *LB2;
        }
    }

    return 0;
}