// Write a program to demonstrate different types of 
// user defined function and Function call
#include<iostream>
using namespace std;
int add(int x, int y){ // simple function returns addition of two numbers
    return x+y;
}
void say(){ // void function that does not return anything
    cout<<"Hello world?"<<endl;
}
int factorial(int x){ // recursive function
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    // function calling
    int x = 10;
    int y = 10;
    cout<<"Addition of 10+10 = "<<add(10,10)<<endl;
    say();
    cout<<"Factorial of 10 = "<<factorial(x)<<endl;

    return 0;
}