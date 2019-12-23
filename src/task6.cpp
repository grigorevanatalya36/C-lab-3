int getSumMaxMin(int arr[], int N)
{
    int a, b, amax, amin, max = 0, min = 0, sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            amax = i;
        }
        else if (arr[i] < min)
        {
            min = arr[i];
            amin = i;
        }
    }
    
    a = (amax < amin) ? amax + 1 : amin + 1;
    b = (amax > amin) ? amax : amin;

    for (int i = a; i < b; i++)
        sum += arr[i];

    return sum;
}