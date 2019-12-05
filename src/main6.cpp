#include "task6.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int givePositive()
{
    return rand() % 9 + 1;
}

int giveNegative()
{
    return rand() % 9 - 9;
}

int main()
{
    int arr[N];
    int sum = 0;
    time_t now;
    time(&now);
    srand(now);

    int value;
    if (N % 2)
        value = N / 2 + 1;
    else
        value = N / 2;
    int positiveCount = value;
    int negativeCount = value;

    for (int i = 0; i < N; i++)
    {
        if (!positiveCount)
            arr[i] = giveNegative();
        else if (!negativeCount)
            arr[i] = givePositive();
        else if (rand() % 2)
        {
            arr[i] = givePositive();
            positiveCount--;
        }
        else
        {
            arr[i] = giveNegative();
            negativeCount--;
        }
    }

    for (int i = 0; i < N; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");

    sum = getSumMaxMin(arr, N);
    printf("%i\n", sum);

    return 0;
}