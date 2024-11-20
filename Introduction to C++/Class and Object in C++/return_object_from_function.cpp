#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[50];
    int roll; 
    int cls;
    char section;

    //Constructor
    Student(char *nm, int r, int c, char s){
        strcpy(name, nm);
        roll = r;
        cls = c;
        section = s;
    }
};
Student fun(){
    char nm[100] = "Zihad bhai";
    Student st1(nm, 101, 7, 'F');
    return st1;
}
int main(){
   Student zihad = fun();
    cout<<zihad.name<<endl;
    cout<<zihad.roll<<endl;
    cout<<zihad.cls<<endl;
    cout<<zihad.section<<endl;


   return 0;
}