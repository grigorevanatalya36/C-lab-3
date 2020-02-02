#include <stdio.h>
#include <stdlib.h>
#include "task5.h"

int getSumInt(int arr[], int N)
{
    int SumInt = 0;
    int i = 0; 
    int j = N-1;

    while (i < N)
    {
        if (arr[i] >= 0)
            i++;
        else if (arr[j] < 0)
            j--;
        else if (i < j)
        {
            i++;
            j--;
            while (i <= j)
            {
                SumInt += arr[i];
                i++;
            }
            break;
        }
    }

    return SumInt;
}