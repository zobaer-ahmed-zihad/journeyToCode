//https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-06/challenges/sort-it-again
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Student a, Student b)
{
    if (a.eng_marks == b.eng_marks)
    {
        if (a.math_marks > b.math_marks)
        {
            return true;
        }
        else if (a.math_marks == b.math_marks)
        {
            return a.id < b.id;
        }else{
            return false;
        }
    }
    else
    {
        return a.eng_marks > b.eng_marks;
    }
}

int main()
{
    int n;
    cin >> n;
    Student st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }
    sort(st, st + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }
    return 0;
}