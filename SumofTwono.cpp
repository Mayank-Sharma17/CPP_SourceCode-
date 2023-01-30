#include<iostream>
using namespace std;

int main() {
    // here the cpp code of sum of 2 number 
    int a, b; // defining 2 variables a and b

    cout<<"Enter first number "<<endl; // print 
    cin>>a; // taking input from the user 

    cout<<"Enter first number "<<endl; // endl is next line
    cin>>b;

    // cout<<"The sum of 2 number a and b is = "<<a+b;
    cout<<"a + b = "<<a + b<<endl;
    cout<<"a - b = "<<a - b<<endl;
    cout<<"a * b = "<<a * b<<endl;
    cout<<"a / b = "<<(float)a / b<<endl; // typecast

    return 0;
}