#include "task5.h"

int getSumInt(int arr[], int N)
{
    int i = 0, j = N-1;
    int sum = 0;
    while (i < N)
    {
        if (arr[i] > 0)
            i++;
        else if (arr[j] < 0)
            j--;
        else if (i + 1 == j||j+1==i)
        {
            sum = 0;
            break;
        }
        else if (i < j)
        {
            i++;
            j--;
            while (i <= j)
            {
                sum = arr[i] + sum;
                i++;
            }
            break;
        }
    }
    return sum;
}
