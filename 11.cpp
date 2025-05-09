// Why do an array of objects require? Demonstrate an 
// array of object with proper example
// Why do an array of objects require? Demonstrate an 
// array of object with proper example
#include<iostream>
#include<string>  // Added for string class
using namespace std;

class Example {
public:
    string name;
    int num;
    
    // Constructor to initialize object
    Example(string n = "", int x = 0) {
        name = n;
        num = x;
    }
    
    // Method to display object data
    void display() {
        cout << "Name: " << name << ", Number: " << num << endl;
    }
};

int main() {
    // Creating an array of Example objects
    Example students[3] = {
        Example("Alice", 1),
        Example("Bob", 2),
        Example("Charlie", 3)
    };
    cout << "Student Details:" << endl;
    for(int i = 0; i < 3; i++) {
        students[i].display();
    }
    cout << "\nModifying second student's data:" << endl;
    students[1].name = "Bobby";
    students[1].num = 22;
    students[1].display();

    return 0;
}