#include <bits/stdc++.h>
using namespace std;
// void print_min_value(priority_queue<int, vector<int>, greater<int>> pq)
// {
//    if (!pq.empty())
//       cout << pq.top() << endl;
//    else
//       cout << "Empty" << endl;
// }
int main()
{
   long long int t;
   cin >> t;
   priority_queue<int, vector<int>, greater<int>> pq;

   while (t--)
   {
      long long int val;
      cin >> val;
      pq.push(val);
   }
   long long int q;
   cin >> q;
   while (q--)
   {
      long long int op;
      cin >> op;
      if (op == 0)
      {
         long long int val;
         cin >> val;
         pq.push(val);
         // print_min_value(pq);
         if (!pq.empty())
            cout << pq.top() << endl;
         else
            cout << "Empty" << endl;
      }
      else if (op == 1)
      {
         // print_min_value(pq);
         if (!pq.empty())
            cout << pq.top() << endl;
         else
            cout << "Empty" << endl;
      }
      else if (op == 2)
      {
         if (!pq.empty())
            pq.pop();

         // print_min_value(pq);
         if (!pq.empty())
            cout << pq.top() << endl;
         else
            cout << "Empty" << endl;
      }
   }

   return 0;
}