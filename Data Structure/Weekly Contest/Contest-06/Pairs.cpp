#include <bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int roll;
    Person(string name, int roll)
    {
        this->name = name;
        this->roll = roll;
    }
};
class Compare
{
public:
    bool operator()(Person l, Person r)
    {
        if (l.name > r.name)
            return true;
        else if (l.name < r.name)
            return false;
        else
        {
            return l.roll < r.roll;
        }
    }
};
int main()
{
    int n;
    cin >> n;
    priority_queue<Person, vector<Person>, Compare> pq;

    while (n--)
    {
        string name;
        int roll;
        cin >> name >> roll;

        Person st(name, roll);
        pq.push(st);
    }

    while (!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << endl;
        pq.pop();
    }

    return 0;
}