#include "task5.h"
#include <stdio.h>

int getSumInt(int arr[], int N)
{
    int negative = 0;
    int positive = 0;
    int sum = 0;

    for (int i = 0; i < N; i++)
    {
        if (arr[i] < 0)
        {
            negative = i;
            break;
        }
    }
    for (int i = N-1; i >=0; i--)
    {
        if (arr[i] > 0)
        {
            positive = i;
            break;
        }
    }
    
    if (positive > negative)
    {
        for (int i = negative+1; i < positive; i++)
            sum += arr[i];
    }
    else
    {
        for (int i = positive+1; i < negative; i++)
            sum += arr[i];
    }

    return sum;
}