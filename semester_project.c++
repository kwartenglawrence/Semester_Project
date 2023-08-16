#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;
    double num1, num2;

    cout << "Scientific Calculator" << endl;
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Trigonometric Functions\n";
    cout << "6. Logarithmic Functions\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Sum = " << (num1 + num2) << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Difference = " << (num1 - num2) << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Product = " << (num1 * num2) << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0)
                cout << "Quotient = " << (num1 / num2) << endl;
            else
                cout << "Division by zero is not allowed." << endl;
            break;
        case 5:
            cout << "Enter an angle in radians: ";
            cin >> num1;
            cout << "Sin(" << num1 << ") = " << sin(num1) << endl;
            cout << "Cos(" << num1 << ") = " << cos(num1) << endl;
            cout << "Tan(" << num1 << ") = " << tan(num1) << endl;
            break;
        case 6:
            cout << "Enter a number: ";
            cin >> num1;
            cout << "Log(" << num1 << ") = " << log(num1) << endl;
            cout << "Log10(" << num1 << ") = " << log10(num1) << endl;
            break;
        default:
            cout << "Invalid choice.";
    }

    return 0;
}
