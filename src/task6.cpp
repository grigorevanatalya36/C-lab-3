#include <stdio.h>
#include <stdlib.h>
#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
    int SumInt = 0;
    int firstMin = 0;
    int firstMax = 0;
    int minimum = arr[0];
    int maximum = arr[0];
    
    int i = 0;

    while(i < N) 
    {
        if (minimum > arr[i]) 
        {
            minimum = arr[i];
            firstMin = i;

        }
        if (maximum < arr[i]) 
        {
            maximum = arr[i];
            firstMax = i;
        }
        i++;
    }
    if (firstMin < firstMax) 
    {
        for (i = firstMin + 1; i < firstMax; i++)
        {
            SumInt = SumInt + arr[i];
        }
    }
    else 
    {
        for (i = firstMax + 1; i < firstMin; i++) 
        {
            SumInt = SumInt + arr[i];
        }

    }

    return SumInt;
}
	