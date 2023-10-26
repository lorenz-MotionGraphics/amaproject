#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "use the correct format for calculation format[value1, arithmetic expression, value2]"<<endl<<endl;
    getline(cin, input);
    istringstream iss(input);
    double firstValue, secondValue;
    char op;
    if (iss >> firstValue >> op >> secondValue) {
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
                    return 1;
                }
                break;
            default:
                cout << "Invalid operator: " << op << endl;
                return 1;
        }
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid input format. Please use the format: value operator value." << endl;
    }
    return 0;
}
