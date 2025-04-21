#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin>>n;
    multiset<int> ms;
    for(int i= 1; i<=n;i++)
    {
        int val;
        cin>>val;
        ms.insert(val);
    }
    // for(auto val : ms)
    //     cout<<val<<" ";
    // cout<<endl;
    // ms.erase(7);
    // ms.erase(5);
    // auto it = ms.find(5);
    // (it == ms.end()) ? cout<<"End" : cout<<"Found";
    // cout<<ms.count(7);
    // cout<<ms.size();
    // ms.clear();
    // cout<<ms.empty();
    // for(auto val : ms)
    //     cout<<val<<" ";
    // cout<<'\n';
    // auto it = ms.find(7);
    // ms.erase(it);

    // for(auto val : ms)
    //     cout<<val<<" ";

    // auto it = ms.lower_bound(5);
    // (it == s.end()) ? cout<<"End": cout<<*it;
    
    auto it = ms.upper_bound(6);
    (it == ms.end()) ? cout<<"End": cout<<*it;

    return 0;
}