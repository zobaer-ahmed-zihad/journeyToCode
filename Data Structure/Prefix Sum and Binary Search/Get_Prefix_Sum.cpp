#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    vector<long long int> prefix_sum(n);
    prefix_sum[0] = v[0];
    for (int i = 1; i < n; i++)
    {
        prefix_sum[i] = v[i] + prefix_sum[i - 1];
    }

    for(int i = n -1; i>= 0; i--){
        cout<<prefix_sum[i]<<" ";
    }

    return 0;
}