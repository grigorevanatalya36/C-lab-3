#include <stdio.h>
#include "task5.h"
#define SIZE 10
int main5()
{
    int arr[SIZE];
    int sum=getSumInt(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d", sum);
    return 0;
}