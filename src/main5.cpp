#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task5.h"

#define N 10
#define MIN_VAL 1
#define MAX_VAL 9

int main()
{
    srand(time(NULL));
    rand();
    int arr[N] = { 0 };
    int value = 0, j = 0;
    int sign = 0;
    for (int i = 0; i < N; i++)
    {
        if (1 + rand() % 2 == 1)
            sign = -1;
        else
            sign = 1;
        value = MIN_VAL + rand() % (MAX_VAL - MIN_VAL+1);
        arr[i] = sign * value;
    }
    for (int i = 0; i < N; i++)
        printf("%d ", arr[i]);
    printf("\n%d", getSumInt(arr, N));
    return 0;
}