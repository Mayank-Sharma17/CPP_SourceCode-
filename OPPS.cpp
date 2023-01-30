#include <iostream>
using namespace std;

class Employee
{ // template / blue print
public:
    string name;
    int salary;

    Employee(string n, int s, int sp) // constructor jab obj bane to ek func run kare
    {
        this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }

    void printDetails()
    {
        cout << "The name of our first employee is " << this->name << " and his salary is " << this->salary << " Dollars" << endl; // tareka us object ko acess karne ka jiske lea baat hore hai jiske lea ye function run kar raha hai
    }

    void getSecretPassword()
    {
        cout<<"The secret password of employee is "<<this->secretPassword;
    }

private: // ander ke public functions hai vo private var ko acess krskte hai
    int secretPassword;
};

class Programmer : public Employee // inhertance
{
    public:
        int errors; // base class ke sare properties in programmer class
};

int main()
{
    Employee har("Harry constructor", 344, 54515555);
    // har.name = "harry";
    // har.salary = 100;
    har.printDetails();
    har.getSecretPassword(); // ab dedega sp cout<<har.secretPassword direct objcet se acess nahe dega

    // cout<<"The name of our first employee is "<<har.name<<" and his salary is "<<har.salary<<" Dollars"<<endl;

    return 0;
}