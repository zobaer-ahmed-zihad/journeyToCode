#include <bits/stdc++.h>
using namespace std;
int min_divisor(int x)
{
    for(int i = 2; i*i <= x; i++)
    {
        if(x % i == 0)
            return i;
    }
    return x;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int l, r;
        cin>>l>>r;
        bool found = false;
        for(int i = l; i<= r; i++)
        {
            int divisor = min_divisor(i);
            if(divisor != i)
            {
                cout<<divisor <<" "<<i - divisor<<'\n';
                found = true;
                break;
            }
        }
        if(!found)
            cout<<"-1"<<'\n'; 
    }
 
}
//problem link: https://codeforces.com/contest/1872/problem/C