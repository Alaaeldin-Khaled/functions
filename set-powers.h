void set_powers(int arr[], int len = 5, int m = 2)
{
    int val = 1;

    for (int i = 0; i < len; ++i)
    {
        arr[i] = val;
        val *= m;
    }
}
