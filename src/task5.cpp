int getSumInt(int arr[], int N)
{
    int a = 0,
        b = 0,
        sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            a = i;
            break;
        }
    }

    for (int i = N - 1; i >= 0; i--)
    {
        if (arr[i] > 0)
        {
            b = i;
            break;
        }
    }

    for (int i = a + 1; i < b; i++)
        sum += arr[i];

    return sum;
}