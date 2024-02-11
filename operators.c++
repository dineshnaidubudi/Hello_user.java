#include <iostream>

using namespace std;
int main() {
    char op;
    double num1, num2, result;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter the operation (+, -, *, /): ";
    cin >> op;
    switch(op) {
        case '+':
            result = num1 + num2;
            cout << "Result: " << num1 << " + " << num2 << " = " << result;
            break;
        case '-':
            result = num1 - num2;
            cout << "Result: " << num1 << " - " << num2 << " = " << result;
            break;
        case '*':
            result = num1 * num2;
            cout << "Result: " << num1 << " * " << num2 << " = " << result;
            break;
        case '/':
            if(num2 == 0) {
                cout << "Error! Division by zero is not allowed.";
            } else {
                result = num1 / num2;
                cout << "Result: " << num1 << " / " << num2 << " = " << result;
            }
            break;
        default:
            cout << "Invalid operation!";
    }

    return 0;
}
