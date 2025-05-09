// What do you understand about the Inline function? 
// How can you create an Inline function ?
// inline functions are mostly used when, user makes simple functions such as shown in program it
// it gets expanded inline during compile time and that means compiler only executes body of the function
// overheading need of function call
// it gets exapneded during compilation
// Sure! In C++, an inline function is a function where the code is expanded in line at the point of each function call. This can reduce the overhead of function calls, especially for small, frequently-used functions
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