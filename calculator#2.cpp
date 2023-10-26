#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    char choice;
    do {
        cout << "Simple Calculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == '5') {
            break;
        }

        double firstValue, secondValue;
        cout << "Enter the first value: ";
        cin >> firstValue;
        
        char op;
        cout << "Enter the operator (+, -, *, /): ";
        cin >> op;

        cout << "Enter the second value: ";
        cin >> secondValue;

        double result;

        switch (op) {
            case '+':
                result = firstValue + secondValue;
                break;
            case '-':
                result = firstValue - secondValue;
                break;
            case '*':
                result = firstValue * secondValue;
                break;
            case '/':
                if (secondValue != 0) {
                    result = firstValue / secondValue;
                } else {
                    cout << "Division by zero is not allowed." << endl;
                    continue;
                }
                break;
            default:
                cout << "Invalid operator: " << op << endl;
                continue;
        }

        cout << "Result: " << result << endl;

    } while (true);

    return 0;
}
