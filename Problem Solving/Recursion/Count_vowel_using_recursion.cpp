#include <bits/stdc++.h>
using namespace std;
int cnt = 0;
int fun(string st, int i, int s)
{
    if(s == i) return 0;
    fun(st, i + 1, s);
    if(st[i] >= 'A' && st[i] <= 'Z')
    {
        st[i] = st[i]+32;
    }
    if(st[i] == 'a' || st[i] == 'e' || st[i] == 'i' || st[i] == 'o'||st[i] == 'u')
    {
        return cnt = cnt + 1;
    }
    else 
    {
        return cnt;
    }
    
}
int main() {
    string st;
    cin>>st;
    int s = st.size();
    cout<<fun(st, 0, s);

}
