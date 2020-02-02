int getSumInt(int arr[], int N)
{
    int sum = 0;
    int negativeIndex = 0;
    int positiveIndex = 0;
    int flag = 1;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0 && flag)
        {
            negativeIndex = i;
            flag = 0;
        }
        else if (arr[i] > 0)
            positiveIndex = i;
    }

    if (negativeIndex < positiveIndex)
        for (int i = negativeIndex + 1; i < positiveIndex; i++)
            sum += arr[i];
    else if (positiveIndex < negativeIndex)
        for (int i = positiveIndex + 1; i < negativeIndex; i++)
            sum += arr[i];
    
    return sum;
}