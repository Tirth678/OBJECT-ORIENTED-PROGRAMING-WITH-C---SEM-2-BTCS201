// Write a different program to demonstrate loops 
// available in C++.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter num of stars"<<endl;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<"\n";
    }

    return 0;
}