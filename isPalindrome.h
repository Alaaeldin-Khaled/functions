bool isPalindrome(const int arr[], int size)
{
    bool palindrome = true;

    for (int i = 0, j = size - 1; i <= j; ++i, --j)
    {
        if (arr[i] != arr[j])
        {
            palindrome = false;
            break;
        }
    }

    return palindrome;
}
