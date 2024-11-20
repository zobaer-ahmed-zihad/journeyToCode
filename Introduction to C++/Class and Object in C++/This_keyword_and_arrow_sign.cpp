#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[500];
    int roll;
    int cls;
    char section;

    Student(char *name, int roll, int cls, char section){
        // Dereference 
        // strcpy(this->name, name);
        // (*this).roll = roll;
        // (*this).cls = cls;
        // (*this).section = section;
        
        //using arrow sign
        strcpy(this->name, name);
        this->roll = roll;
        (*this).cls = cls;
        this->section = section;
    };

};
int main(){
   char nm[500] = "Rahim Uddin";
   Student rahim(nm, 101, 7, 'G');
   cout<<rahim.name<<" "<<rahim.roll;
   return 0;
}