// Write difference between Constructor overloading
// and overriding. Also apply the concept with proper 
// examples
#include<iostream>
using namespace std;
class Nothing{
public:
    virtual int add(int x, int y){ // function overloading
        return x+y;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
};
class Example : public Nothing{ // function overriding
int add(int x, int y){
    return x+y;
}

};
int main(){

    return 0;
}