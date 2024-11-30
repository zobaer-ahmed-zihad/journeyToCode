#include <bits/stdc++.h>
using namespace std;
class CustomSort
{
public:
    char ch;
    int cnt;
};
bool cmp(CustomSort a, CustomSort b)
{
    if (a.cnt > b.cnt)
        return true;
    else
        return false;
}
int main()
{
    CustomSort frq[26]; // create 26 array of obj
    // Assign every obj character & count 0
    for (int i = 0; i < 26; i++)
    {
        frq[i].ch = i + 'a';
        frq[i].cnt = 0;
    }

    int n;
    cin >> n;
    // input char & increase count
    for (int i = 0; i < n; i++)
    {
        char ch;
        cin >> ch;
        frq[ch - 'a'].cnt++;
    }
    sort(frq, frq + 26, cmp); // Sorting descending order
    // printf character
    for (int i = 0; i < 26; i++)
    {
        if (frq[i].cnt > 0)
        {
            for (int j = 0; j < frq[i].cnt; j++)
            {
                cout << frq[i].ch;
            }
        }
    }

    return 0;
}