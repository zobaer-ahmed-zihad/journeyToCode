#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[50];
    int roll;
    char section;
    int math_marks;
    int cls;
    // Constructor
    Student(char *nm, int roll, char section, int math_marks, int cls)
    {
        strcpy(name, nm);
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};
int main()
{
    Student sakib("Sakib khan", 101, 'E', 94, 7);
    Student zihad("zihad ahmed", 154, 'A', 97, 11);
    Student karim("Karim jannat", 209, 'F', 57, 9);

    if (sakib.math_marks >= zihad.math_marks && sakib.math_marks >= karim.math_marks)
    {
        cout <<sakib.name<<" "<< sakib.math_marks << endl;
    }
    else if (zihad.math_marks >= sakib.math_marks && zihad.math_marks >= karim.math_marks)
    {
        cout <<zihad.name<<" "<< zihad.math_marks << endl;
    }
    else
    {
        cout <<karim.name<<" "<< karim.math_marks << endl;
    }

    return 0;
}