#include <iostream>
using namespace std;

// define return type
// maths function => f(x) = x^2 + 2 value dega jo ke int hoge float hoga kuch bhe hoge
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main() // main function
{
    int a, b;

    cout<<"Enter first number "<<endl;
    cin>>a; 

    cout<<"Enter first number "<<endl;
    cin>>b;
    cout<<"The function returned "<<add(a,b);

    return 0;
}