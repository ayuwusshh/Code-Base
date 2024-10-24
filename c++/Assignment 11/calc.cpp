#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> operation;

    cout << "Enter first number: ";
    cin >> num1;

    if (operation != 's' && operation != 'S') {
        cout << "Enter second number: ";
        cin >> num2;
    }

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
            if (num2 == 0) {
                cout << "Error! Division by zero!" << endl;
                return -1;
            }
            result = num1 / num2;
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case 's':
        case 'S':
            result = sqrt(num1);
            break;
        default:
            cout << "Error! Invalid operator" << endl;
            return -1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
