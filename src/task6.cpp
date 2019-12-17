#include "task6.h"
#include <stdio.h>

int getSumMaxMin(int arr[], int N)
{
    int min = 0;
    int max = 0;
    int sum = 0;

    for (int i = 1; i < N; i++)
    {
        if (arr[i] > arr[max])
            max = i;
        if (arr[i] < arr[min])
            min = i;
    }
    
    if (max > min)
    {
        for (int i = min + 1; i < max; i++)
            sum += arr[i];
    }
    else
    {
        for (int i = max + 1; i < min; i++)
            sum += arr[i];
    }

    return sum;
}