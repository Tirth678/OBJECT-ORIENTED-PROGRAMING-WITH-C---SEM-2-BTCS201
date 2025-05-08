// Write a program to demonstrate scope resolution 
// operators and reference variables in C++.
#include<iostream>
int main(){
    int x = 10;
    int &y = x;
    std::cout<<"This is using standard cout using scope resolution operator;"<<std::endl;
    std::cout<<"Value of y: "<<y<<std::endl;

    return 0;
}