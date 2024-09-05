#include <iostream>
using namespace std;

/** MAX of 6 numbers (utilization of each function)
 *
 */


int max(int a, int b, int c)
{
    if (a >= b)
    {
        return a >= c ? a : c;
    }

    if (b >= a)
    {
        return b >= c ? b : c;
    }

    return c;
}


int max(int a, int b, int c, int d)
{
    int prev_max = max(a, b, c);
    return prev_max >= d ? prev_max : d;
}

int max(int a, int b, int c, int d, int e)
{
    int prev_max = max(a, b, c, d);
    return prev_max >= e ? prev_max : e;
}

int max(int a, int b, int c, int d, int e, int f)
{
    int prev_max = max(a, b, c, d, e);
    return prev_max >= f ? prev_max : f;
}
