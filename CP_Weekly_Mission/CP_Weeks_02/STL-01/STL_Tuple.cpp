#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // tuple<string, int, char> tou = make_tuple("zobaer", 877, 'A');
    // cout << get<0>(tou) << " " << get<1>(tou) <<" " << get<2>(tou);

    // tuple<string, int, string> t = {"zihad", 877, "01623"};
    // cout<<get<0>(t)<<" "<<get<1>(t)<<" "<<get<2>(t);
    // auto [name, roll, phone] = t;
    // cout<<name<<" "<<roll<<" "<<phone;

    int n;
    cin >> n;
    vector<tuple<string, int, char, int>> t;
    for (int i = 0; i < n; i++)
    {
        string name;
        int roll;
        char id;
        int phone;

        cin >> name >> roll >> id >> phone;
        t.push_back(make_tuple(name, roll, id, phone));
    }

    for (int i = 0; i < n; i++)
    {
        string name = get<0>(t[i]);
        int roll = get<1>(t[i]);
        char id = get<2>(t[i]);
        int phone = get<3>(t[i]);
        cout << name << " " << roll << " " << id << " " << phone<<endl;
    }

    return 0;
}