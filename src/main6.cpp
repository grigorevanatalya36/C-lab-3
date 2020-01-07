#include <stdio.h>
#include "task6.h"
#define SIZE 10
int main6()
{
    int arr[SIZE];
    int sum=getSumMaxMin(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n%d", sum);
    return 0;
}