#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        getline(cin, s);
        vector<pair<string, int>> v;
        map<string, int> mp;
        int count = 0;
        
        stringstream ss(s);
        string word;
        while (ss >> word)
        {
            mp[word]++;
            if (mp[word] > count)
            {
                count = mp[word];
                v.push_back({word, mp[word]});
            }
        }
        cout << v.back().first << " " << v.back().second << endl;
    }

    return 0;
}