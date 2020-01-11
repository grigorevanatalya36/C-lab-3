#include <stdio.h>
#include "task5.h"
#define SIZE 10
int main5()
{
    srand(time(NULL));
    int arr[SIZE] = { 1,-2,3,-4,-6,2,3 };
    //generate(arr, SIZE);
    int sum=getSumInt(arr, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d", sum);
    return 0;
}