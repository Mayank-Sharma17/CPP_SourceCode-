#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;

    // if(age>150 || age<1) {
    //     cout<<"Invalid age";
    // } else if(age>=18) {
    //     cout<<"You can vote";
    // } else {
    //     cout<<"You cannot vote";
    // }

    switch (age) // switch statement in cpp
    {
    case 12:
        cout << "You are 12 years old";
        break;
    case 18:
        cout << "You are 18 years old";
        break;

    default:
        cout << "You are neither 12 nor 18 years old";
        break; // no need iske baad to exit krna he hai
    }

    return 0;
}