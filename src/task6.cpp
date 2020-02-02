#include "task6.h"

int getSumMaxMin(int arr[], int N)
{
    int sum = 0, min = arr[0], max = arr[0], min_in = 0, max_in = 0;

    for (int i = 1; i < N; i++)
    {
        if (min > arr[i]) // находим максимальный элемент
        {
            min = arr[i];
            min_in = i;
        }
        if (max < arr[i]) //находим минимальный элемент
        {
            max = arr[i];
            max_in = i;
        }
    }

    if (min_in <= max_in)  // находим сумму элементов
    {
        for (int p = min_in +1; p < max_in; p++) 
            sum = sum + arr[p];
    }
    else
    {
        for (int p = max_in +1; p < min_in; p++) 
            sum = sum + arr[p];
    }

    return sum;


}