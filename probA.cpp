// demonstrate a program which shows concept of constructor overloading
// and create objects with it

#include<iostream>
using namespace std;
class Addition{
public:
    int add(int x, int y){
        return x+y;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
    int add(int f, int g, int h, int j){
        return f+g+h+j;
    }
    int add(int x){
        if(x == 0){
            return 0;
        }
        else if(x == 1){
            return 1;
        }
        else{
            return x+add(x-1);
        }   
    }
};
int main(){
    Addition a1,a2;
    cout<<"Addition of two numbers = "<<a1.add(1,2)<<endl;
    cout<<"Addition of three numbers = "<<a1.add(3,4,5)<<endl;
    cout<<"Addition of four numbers = "<<a1.add(6,7,8,9)<<endl;
    cout<<"Addition of n numbers = "<<a1.add(5)<<endl;
    return 0;
}