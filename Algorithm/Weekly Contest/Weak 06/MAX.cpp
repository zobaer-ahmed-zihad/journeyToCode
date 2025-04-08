#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;

    unordered_map<int, int> freq;
    priority_queue<pair<int, int>> pq;

    while (q--) 
    {
        int query, x;
        cin >> query;

        if (query == 1) 
        {
            cin >> x;
            freq[x]++;
            pq.push({freq[x], x});
        } 
        else 
        {
            if (pq.empty()) 
            {
                cout << "empty\n";
            } 
            else 
            {
                while (!pq.empty()) 
                {
                    auto [f, val] = pq.top();
                    if (freq[val] == f) 
                    {
                        cout << val << '\n';
                        freq[val] -= max(1, freq[val] - 1);

                        pq.pop();
                        break;
                    } 
                    else 
                    {
                        pq.pop();
                    }
                }
            }
        }
    }

    return 0;
}