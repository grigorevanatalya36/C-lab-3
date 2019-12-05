#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
    int sum = 0;
    int minValue = arr[0];
    int maxValue = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < minValue)
        {
            minIndex = i;
            minValue = arr[i];
        }
        else if (arr[i] > maxValue)
        {
            maxIndex = i;
            maxValue = arr[i];
        }
    }

    if (minIndex < maxIndex)
        for (int i = minIndex + 1; i < maxIndex; i++)
            sum += arr[i];
    else if (maxIndex < minIndex)
        for (int i = maxIndex + 1; i < minIndex; i++)
            sum += arr[i];

    return sum;
}