// What do you understand about the Inline function? 
// How can you create an Inline function ?
#include<iostream>
using namespace std;
inline int add(int a, int b){ // declearing an inline function
    return a+b;
}
int main(){
    int x = 10;
    int y = 2;
    cout<<"Addtion of x+y = "<<add(x,y)<<endl;

    return 0;
}