// Write a different program to demonstrate control statement available in C++.
#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter user age"<<endl;
    cin>>age;
    if(age>=18){
        cout<<"User can vote."<<endl;
    }
    else if (age == 18){
        cout<<"User can vote."<<endl;
    }
    else{
        cout<<"User cannot vote."<<endl;
    }

    return 0;
}