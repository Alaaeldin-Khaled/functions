/** return n-th prime number */

bool isPrime(int num)
{
    bool prime = true;

    for (int i = 2; i <= num / 2; ++i)
    {
        if (num % i == 0)
        {
            prime = false;
            break;
        }
    }

    return prime;
}


int nth_prime(int n)
{
    int result = 0;
    int i = 2;

    while (n)
    {
        if (isPrime(i))
        {
            result = i;
            --n;
        }
        ++i;
    }
    return result;
}
