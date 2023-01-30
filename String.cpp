#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name = "Mayank";
    cout<<"the name is "<<name<<endl;
    cout<<"the length of name is "<<name.length()<<endl;
    cout<<"the name is "<<name.substr(2,3)<<endl; // inddex 2 se aage ke 3 character deega
    //cout<<"the name is "<<name;
}