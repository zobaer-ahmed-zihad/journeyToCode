#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        int val;
        cin >> val;
        s.insert(val);
    }
    // auto it = s.begin();
    // auto it = s.end();
    // it++;
    // it++;
    // it++;
    // it--;
    // cout<<*it<<'\n';

    // for(auto it = s.begin(); it != s.end(); it++)
    //     cout<<*it<<" ";

    // (s.find(7) != s.end()) ? cout << "Found" : cout << "Not Found";
    // s.erase(3);
    // cout<<s.count(70);
    // cout<<s.size();
    // s.clear();
    // cout<<s.empty();
    for (auto val : s)
        cout << val << " ";
    cout<<'\n';

    // auto it = s.lower_bound(5);
    // (it == s.end()) ? cout<<"End": cout<<*it;
    
    auto it = s.upper_bound(6);
    (it == s.end()) ? cout<<"End": cout<<*it;

    return 0;
}