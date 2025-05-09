// Write a program to demonstrate concepts and 
 // different types of constructor.
 #include<iostream>
 using namespace std;
 class Example{
 private:
    int rollno;
    string classNo;
 public:
    string name;
    int id;
    void showDetails(){ // default constructor call
        cout<<"Name of student = "<<name<<endl;
        cout<<"Id of student = "<<id<<endl;
    }
    void setDetails(int r){ // parametersied constructor
        rollno = r;
    }
    int getDetails(){ // non-parameterised contructor
        return rollno;
    }
    
 };
 int main(){
    Example e1;
    e1.name = "Lol";
    e1.setDetails(12);
    e1.getDetails();
    cout<<e1.name<<endl;
    cout<<e1.getDetails()<<endl;

    return 0;
 }