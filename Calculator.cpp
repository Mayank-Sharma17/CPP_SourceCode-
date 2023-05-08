#include <iostream>
#include<cmath>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    // Take user input
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /, %): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    // Perform arithmetic operation
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        case '%':
            result = fmod(num1, num2);
            break;
        default:
            cout << "Error: invalid operation" << endl;
    }

    // Display result
    cout << "Your Result is : " << result << endl;
    return 0;
}
