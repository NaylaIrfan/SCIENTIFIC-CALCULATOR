#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int choice;
    double num1, num2;

    cout << "==============================" << endl;
    cout << "      SCIENTIFIC CALCULATOR" << endl;
    cout << "==============================" << endl;

    cout << "\n1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Power" << endl;
    cout << "6. Square Root" << endl;
    cout << "7. Sine" << endl;
    cout << "8. Cosine" << endl;
    cout << "9. Tangent" << endl;
    cout << "10. Logarithm" << endl;

    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 + num2 << endl;
            break;

        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 - num2 << endl;
            break;

        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result = " << num1 * num2 << endl;
            break;

        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;

            if (num2 != 0)
                cout << "Result = " << num1 / num2 << endl;
            else
                cout << "Error: Cannot divide by zero!" << endl;
            break;

        case 5:
            cout << "Enter base and power: ";
            cin >> num1 >> num2;
            cout << "Result = " << pow(num1, num2) << endl;
            break;

        case 6:
            cout << "Enter a number: ";
            cin >> num1;

            if (num1 >= 0)
                cout << "Square Root = " << sqrt(num1) << endl;
            else
                cout << "Error: Cannot find square root of a negative number!" << endl;
            break;

        case 7:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Sine = " << sin(num1 * 3.14159 / 180) << endl;
            break;

        case 8:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Cosine = " << cos(num1 * 3.14159 / 180) << endl;
            break;

        case 9:
            cout << "Enter angle in degrees: ";
            cin >> num1;
            cout << "Tangent = " << tan(num1 * 3.14159 / 180) << endl;
            break;

        case 10:
            cout << "Enter a number: ";
            cin >> num1;

            if (num1 > 0)
                cout << "Logarithm = " << log(num1) << endl;
            else
                cout << "Error: Logarithm is only defined for positive numbers!" << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
