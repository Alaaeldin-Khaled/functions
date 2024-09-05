/**
 *
 * Employee Program V-2 (V-1 is in charArrays project)
 *
 */
#include <iostream>
using namespace std;

// Global Variables
const int MAX = 10000;

string names[MAX];
int ages[MAX];
double salaries[MAX];
char genders[MAX];
int added = 0;



int menu()
{
    int choice;
    cout << "Enter your choice:" << endl;
    cout << "1) Add new employee" << endl;
    cout << "2) Print all employees" << endl;
    cout << "3) Delete by age" << endl;
    cout << "4) Update salary by name" << endl;
    cout << "5) Exit" << "\n\n\t";

    cin >> choice;

    if ((choice >= 1 && choice <= 5))
        return choice;

    choice = menu();
}

void read_employee()
{
    cout << "\nEnter name: ";
    cin >> names[added];

    cout << "Enter age: ";
    cin >> ages[added];

    cout << "Enter salary: ";
    cin >> salaries[added];

    cout << "Enter gender: ";
    cin >> genders[added];

    ++added;

    cout << endl;
}

void print_employees()
{
    cout << "*************************************************************************\n";

    for (int j = 0; j < added; ++j)
        {
            cout << "name: " << names[j] << " age: "<< ages[j] << " salary: " << salaries[j] << " gender: " << genders[j] << endl;
        }

    cout << "*************************************************************************\n";
}

void delete_by_age()
{
    int Age1, Age2;
    cout << "Enter age range: ";
    cin >> Age1 >> Age2;

    for (int j = 0; j < added; ++j)
    {
        if (ages[j] >= Age1 && ages[j] <= Age2)
        {
            names[j] = "";
            ages[j] = 0;
            salaries[j] = 0;
            genders[j] = 0;
        }
    }
}

void update_salary_by_name()
{
    cout << "\nEnter name: ";
    string Name;
    cin >> Name;
    int Salary;
    cout << "\nEnter salary: ";
    cin >> Salary;
    bool done = true;

    for (int j = 0; j < added; ++j)
    {
        if (names[j] == Name)
        {
            salaries[j] = Salary;
            done = false;
        }
    }

    if (done)
        cout << "not found." << endl << endl;
    else
        cout << "Done" << endl << endl;
}



void employee_system()
{
    while (true)
    {
        int choice = menu();

        if (choice == 1)
            read_employee();
        if (choice == 2)
            print_employees();
        if (choice == 3)
            delete_by_age();
        if (choice == 4)
            update_salary_by_name();
        if (choice == 5)
            break;
    }
}
