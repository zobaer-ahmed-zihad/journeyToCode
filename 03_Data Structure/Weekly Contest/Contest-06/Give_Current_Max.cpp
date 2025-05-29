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
        if (l.marks < r.marks)
            return true;
        else if (l.marks > r.marks)
            return false;
        else
            return l.roll > r.roll;
    }
};
// void print_student_info(priority_queue<Student, vector<Student>, Compare> pq)
// {
//     if (!pq.empty())
//         cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
//     else
//         cout << "Empty" << endl;
// }
int main()
{
    priority_queue<Student, vector<Student>, Compare> pq;
    int t;
    cin >> t;
    while (t--)
    {
        string name;
        int roll;
        int marks;
        cin >> name >> roll >> marks;
        Student st(name, roll, marks);
        pq.push(st);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 0)
        {
            string name;
            int roll;
            int marks;
            cin >> name >> roll >> marks;
            Student st1(name, roll, marks);
            pq.push(st1);
            // print_student_info(pq);
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else if (op == 1)
        {
            // print_student_info(pq);
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
        else
        {
            if (!pq.empty())
                pq.pop();
            // print_student_info(pq);
            if (!pq.empty())
                cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
            else
                cout << "Empty" << endl;
        }
    }

    return 0;
}