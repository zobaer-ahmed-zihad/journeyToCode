#include <bits/stdc++.h>
using namespace std;
int main()
{
   string st;
   cin >> st;
   if (st.size() == 1)
   {
      cout << "000" << st;
   }
   else if (st.size() == 2)
   {
      cout << "00" << st;
   }
   else if (st.size() == 3)
   {
      cout << "0" << st;
   }
   else
      cout << st;

   return 0;
}