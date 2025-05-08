// Write a program to demonstrate class and object 
// creation. Define a member function inside the class 
// and outside the class.
#include<iostream>
using namespace std;
class Teacher{ // to create a class
public:
    string name; // properties
    string div;
    int id;
    void getDept(){ // member functions
        cout<<"Welcome to CSE"<<endl;
    }
};
int main(){
     Teacher t1; // such as t1 we can create many objects
        t1.name = "XYZ"; // assigning values
        t1.id = 1;
        t1.div = "CSE";
        t1.getDept();
        cout<<"Name of teacher = "<<t1.name<<endl;
        cout<<"Divison of teacher = "<<t1.name<<endl;
        cout<<"id of teacher = "<<t1.name<<endl;
        t1.getDept();
    return 0;
}