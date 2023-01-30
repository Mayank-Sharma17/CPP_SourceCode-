#include <iostream>
using namespace std;

int main()
{
    int a = 34;
    int* ptra; // store address of variable special datatype 
    ptra = &a; // address of a
    cout<<*ptra; // *->derefrencing operator value
    return 0;
}