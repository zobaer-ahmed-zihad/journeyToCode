#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // pair<string, int> person = make_pair("zihad", 20);
    // cout << person.first << " " << person.second;
    // pair<string, int> person = {"Zobaer Ahmed Zihad", 877};
    // person.first = "zihad";
    // auto [name, roll] = person;
    // cout << name << " " << roll;
    // int n;
    // cin >> n;
    // pair<string, int> students[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> students[i].first >> students[i].second;
    // }
    // // for (int i = 0; i < n; i++)
    // // {
    // //     cout << students[i].first << " " << students[i].second << '\n';
    // // }
    // for (auto [name, roll] : students)
    // {
    //     cout << name << " " << roll << endl;
    // }

    // Nested Pair
    // pair<string, pair<int, char>> students = {"zihad", {877, 'A'}};
    // cout << students.first << " " << students.second.first << " " << students.second.second;

    // string name = students.first;
    // int roll = students.second.first;
    // char section = students.second.second;
    // cout << name << " " << roll << " " << section;

    pair<string, pair<int, pair<int, char>>> employee = {"zihad", {877, {1665, 'E'}}};
    string name = employee.first;
    int id = employee.second.first;
    int phone = employee.second.second.first;
    char subSection = employee.second.second.second;

    cout << name << " " << id << " " << phone << " " << subSection;

    return 0;
}