/*
https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/replace-word
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.ignore();
    while (n != 0)
    {
        string st1, st2;
        cin >> st1 >> st2;

        while (st1.find(st2) != -1)
        {
            st1.replace(st1.find(st2), st2.size(), "#");
        }

        cout << st1 << endl;
        n--;
    }
    return 0;
}