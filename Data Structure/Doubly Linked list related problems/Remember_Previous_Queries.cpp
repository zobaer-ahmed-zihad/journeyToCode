//https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-06/challenges/remember-previous-queries
#include <bits/stdc++.h>
using namespace std;
// print forward
void print_forward(list<int> tmp)
{
    cout << "L -> ";
    for (int val : tmp)
    {
        cout << val << " ";
    }
    cout << endl;
}
// print reverse
void print_reverse(list<int> tmp)
{
    tmp.reverse();
    cout << "R -> ";
    for (int val : tmp)
    {
        cout << val << " ";
    }
    cout << endl;
}

int main()
{
    list<int> myList;

    int q;
    cin >> q;

    while (q--)
    {
        long long int pos, val;
        cin >> pos >> val;

        if (pos == 0)
        {
            myList.push_front(val);
            print_forward(myList);
            print_reverse(myList);
        }
        else if (pos == 1)
        {
            myList.push_back(val);
            print_forward(myList);
            print_reverse(myList);
        }
        else if (pos == 2)
        {
            int size = myList.size();
            if (val >= size)
            {
                print_forward(myList);
                print_reverse(myList);
            }
            else
            {
                myList.erase(next(myList.begin(), val));
                print_forward(myList);
                print_reverse(myList);
            }
        }
    }

    return 0;
}
