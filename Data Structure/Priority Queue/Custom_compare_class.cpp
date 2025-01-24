#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks)
    {
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class Compare
{
public:
    bool operator()(Student l, Student r)
    {
        return r.marks > l.marks;
    }
};
int main()
{
    priority_queue<Student, vector<Student>, Compare> pq;

    int n;
    cin >> n;
    while (n--)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;

        Student st(name, roll, marks);
        pq.push(st);
    }
    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}