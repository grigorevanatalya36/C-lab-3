#include <stdio.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
    int* firstPoint = arr;
    int* lastPoint = arr;
    int minNumber = arr[0];
    int maxNumber = arr[0];
    int i = 1;
    int sum = 0;
    while (i < N - 1)
    {
        if (arr[i] < minNumber)
        {
            minNumber = arr[i];
            firstPoint = arr + i;
            i++;
        }
        else if (arr[i] > maxNumber)
        {
            maxNumber = arr[i];
            lastPoint = arr + i;
            i++;
        }
        else 
            i++;
    }
    if (firstPoint < lastPoint)
    {
        firstPoint++;
        lastPoint--;
        while (firstPoint <= lastPoint)
        {
            sum = sum + *firstPoint;
            firstPoint++;
        }
    }
    else if (firstPoint > lastPoint)
    {
        firstPoint--;
        lastPoint++;
        while (firstPoint >= lastPoint)
        {
            sum = sum + *firstPoint;
            firstPoint--;
        }
    }
    printf("\n minimum number is %d", minNumber);
    printf("\n maximum number is %d", maxNumber);
    return sum;
}
