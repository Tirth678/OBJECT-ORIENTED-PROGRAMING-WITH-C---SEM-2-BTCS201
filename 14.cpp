// Write a program to demonstrate friend function
 // friend function and class
#include<iostream>
using namespace std;
class A{
    string secret = "secret data";
    friend class B; 
    friend void revealSecret(A &obj); 
};
class B{ // becomes friend of class A vica versa nhi hoga
public:
    void showSecret(A &obj){
        cout<<obj.secret; // this is a private memeber of A;
    }
    void revealSecret(A &obj){
        cout<<"Secret is revealed"<<obj.secret<<endl;
    }
};
void revealSecret(A &obj) {
    cout << "Secret is revealed: " << obj.secret << endl;
}

int main(){
    A a1;
    B b1;

    // b1.revealSecret(a1);
    revealSecret(a1);
    return 0;
}