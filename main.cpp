#include <iostream>
#include <ctime>
#include <cstdlib>
//#include "app.h"
#include "utilization.h"
#include "reverse_str.h"
#include "calculator.h"
#include "isPalindrome.h"
#include "set-powers.h"
#include "Q6-nth-prime.h"
#include "Q7-replace-str.h"

using namespace std;

int our_abs(int n)
{
    if (n >= 0)
        return n;

    return -n;
}

int our_max(int a, int b)
{
    if (a >= b)
        return a;

    return b;
}

int our_max2(int a, int b)
{
    a = our_abs(a);
    b = our_abs(b);

    if (a >= b)
        return a;

    return b;
}

// Function with default-value parameter
int our_pow(int a, int b = 3)
{
    int result = 1;

    while (b--)
    {
        result *= a;
    }

    return result;
}

// Function overloading

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

// Pass by reference

void change(int a, int &b)
{
    a++;
    b++;
}

void read(int x, int &y, string &str)
{
    cin >> x >> y >> str;
}

// Pass array by reference [default]

int sum_array(int arr[], int len)
{
    int sum = 0;
    for (int i = 0; i < len; ++i)
        sum += arr[i];

    return sum;
}

// pass by value

//bool is_lower(string str)
//{
//    for (int i = 0; i < str.size(); ++i)
//    {
//        bool lower = str[i] >= 'a' && str[i] <= 'z';
//
//        if (!lower)
//            return false;
//    }
//
//    return true;
//}

// pass by reference with modification prevention

bool is_lower(const string &str)
{
    for (int i = 0; i < str.size(); ++i)
    {
        bool lower = str[i] >= 'a' && str[i] <= 'z';

        if (!lower)
            return false;
    }

    return true;
}

int main()
{

//    cout << our_abs(5) << endl;
//    cout << our_abs(-5) << endl;

//    cout << our_max(1, 2) << endl;
//    cout << our_max(4, 4) << endl;
//    cout << our_max(our_abs(-2), 1) << endl;
//
//    cout << our_max2(-2, 1);

//    cout << our_pow(2) << endl;
//    cout << our_pow(2, 3) << endl;
//    cout << our_pow(2, 4) << endl;


//    int a = 1, b = 1;
//
//    cout << a << " " << b << endl;
//
//    change(a, b);
//
//    cout << a << " " << b << endl;
//
//    string name;
//
//    read(a, b, name);
//
//    cout << a << " " << b << " " << name << endl;

//    int arr[6] = {1, 2, 3, 4, 5, 6};
//
//    cout << sum_array(arr, 3) << endl;
//    cout << sum_array(arr, 6) << endl;

//    cout << is_lower("abc") << endl;
//    cout << is_lower("aBC") << endl;

//    srand(time(0));
//
//    cout << (double)rand() / RAND_MAX << endl;
//    cout << rand() << endl;
//    cout << rand() << endl;

    //employee_system();

//    cout << max(1, 2, 3) << endl;
//    cout << max(1, 2, 3, 4) << endl;
//    cout << max(1, 2, 3, 4, 5) << endl;
//    cout << max(1, 2, 3, 4, 5, 6) << endl;
//    cout << max(6, 5, 4, 3, 2, 1) << endl;

//    cout << reverse_str("Alaa") << endl;

//    calculator();

/** isPalindrome function */

//    int N;
//    cout << "Enter array size: ";
//    cin >> N;
//    int arr[N];
//
//    cout << "Enter array numbers:\n";
//    for (int i = 0; i < N; ++i)
//        cin >> arr[i];
//
//    cout << "is palindrome? " << isPalindrome(arr, N) << endl;

    /** Set-powers */
//
//    int len = 11, m = 0;
//    int arr[len];
//
//    set_powers(arr, len, m);
//
//    for (int i = 0; i < len; ++i)
//        cout << arr[i] << endl;

    /** return n-th prime number */

//    cout << isPrime(10) << endl;

//    cout << nth_prime(8);


    /** replace substring */

    string input = "aabcabaaad";
    string pattern = "aa";
    //string to = "x";
    //string to = "aaaa";
    string to = "";

//    int pos = 0;

//    cout << starts_with(input, pattern, pos) << endl;

    string result = replace_str(input, pattern, to);

    cout << result << endl;

    return 0;
}
