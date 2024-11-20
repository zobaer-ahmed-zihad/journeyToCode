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
int main(){
   Student rahim("Rahim uddin", 101, 7, 'E');
   Student karim("karim cholumillah", 105, 9, 'F');

   cout<<karim.name<<endl;
   cout<<karim.roll<<endl;
   cout<<karim.cls<<endl;
   cout<<karim.section<<endl;

   return 0;
}