#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "task6.h"

#define N 7

int main()
{
    int arr[N];
    
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        int r = rand() % 2;

        if (r == 0)
        {
            arr[i] = 1 + rand() % 9;
            printf("%d ", arr[i]);
        }
        else if (r == 1)
        {
            arr[i] = -9 + rand() % 9;
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    printf("Sum = %d\n", getSumMaxMin(arr, N));

    return 0;
}