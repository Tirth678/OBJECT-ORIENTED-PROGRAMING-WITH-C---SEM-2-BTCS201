// Write a program to demonstrate implicit type casting 
// and explicit type casting in C++.
// Write a program to demonstrate implicit type casting 
// and explicit type casting in C++.
#include<iostream>
using namespace std;

int main() {
    // Implicit type casting
    int x = 10;
    float y = 2.0;
    cout << "Implicit casting in division: " << endl;
    cout << "10/2.0 = " << (x/y) << endl;  // int is implicitly converted to float
    
    // Explicit type casting
    double z = 3.14159;
    cout << "\nExplicit casting examples: " << endl;
    cout << "Double to int: " << (int)z << endl;     // C-style cast
    
    return 0;
}