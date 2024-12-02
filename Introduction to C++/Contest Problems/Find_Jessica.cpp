//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/find-jessica
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    getline(cin, st);
    string name = "Jessica";
    string word;
    stringstream ss(st);
    int flag = 1;
    while (ss >> word)
    {
        if (word == name)
        {
            flag = 0;
            break;
        }
    }
    (flag == 0) ? cout << "YES" : cout << "NO";

    return 0;
}