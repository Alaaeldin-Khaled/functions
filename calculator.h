/** Simple calculator
 *
 */

#include <iostream>

int menu()
{
    cout << "1- Add 2 Numbers\n";
    cout << "2- Subtract 2 Numbers\n";
    cout << "3- Multiply 2 Numbers\n";
    cout << "4- Divide 2 Numbers\n";
    cout << "5- Exit\n\n\t";

    int choice;
    cin >> choice;
    return choice;
}

int add(int &a, int &b)
{
    return a + b;
}

double add(double &a, double &b)
{
    return a + b;
}

int subtract(int &a, int &b)
{
    return a - b;
}

double subtract(double &a, double &b)
{
    return a - b;
}

int multiply(int &a, int &b)
{
    return a * b;
}

double multiply(double &a, double &b)
{
    return a * b;
}

int divide(int &a, int &b)
{
    return a / b;
}

double divide(double &a, double &b)
{
    return a / b;
}

void calculator()
{
    static int number_of_operations = 0;

    while (true)
    {
        int choice = menu();

        if (choice >= 1 && choice <= 5)
        {
            if (choice == 5)
            {
                cout << "Number of operations done: " << number_of_operations << endl;
                break;
            }

            double a, b;
            cin >> a >> b;

            if (choice == 1)
            {
                cout << endl << add(a, b) << endl << endl;
                ++number_of_operations;
            }
            else if (choice == 2)
            {
                cout << endl << subtract(a, b) << endl << endl;
                ++number_of_operations;
            }
            else if (choice == 3)
            {
                cout << endl << multiply(a, b) << endl << endl;
                ++number_of_operations;
            }
            else if (choice == 4)
            {
                if (b == 0)
                {
                    cout << "\nNo division by zero\n" << endl;
                    continue;
                }
                cout << endl << divide(a, b) << endl << endl;
                ++number_of_operations;
            }
        }
        else{
            cout << "\nInvalid input..\n\n";
        }

    }
}
