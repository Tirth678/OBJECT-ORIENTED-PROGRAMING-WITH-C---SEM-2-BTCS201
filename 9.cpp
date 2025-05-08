    // Write a program to show the working of different 
    // access specifiers
    #include<iostream>
using namespace std;

class Teacher {
protected:  // Accessible in derived classes, but not outside
    string name;
    int id;

public:
    void setDetails(string n, int i) {
        name = n;
        id = i;
    }

    void displayDetails() {
        cout << "Teacher Name: " << name << ", ID: " << id << endl;
    }
};

class Student : public Teacher {
public:
    void setStudentDetails(string n, int i) {
        name = n;  // Accessing protected member of base class
        id = i;
    }

    void showStudentDetails() {
        cout << "Student (from Teacher) Name: " << name << ", ID: " << id << endl;
    }
};

class Example {
public:  // Accessible from anywhere
    string name;
    int id;

    void show() {
        cout << "Example Name: " << name << ", ID: " << id << endl;
    }
};

int main() {
    Teacher t;
    // t.name = "Mr. Sharma"; // ❌ Not accessible (protected)
    t.setDetails("Mr. Sharma", 101);
    t.displayDetails();

    Student s;
    s.setStudentDetails("Ravi", 202);  // ✅ Uses protected access from base
    s.showStudentDetails();

    Example e;
    e.name = "Example Object";  // ✅ Public access
    e.id = 303;
    e.show();

    return 0;
}
