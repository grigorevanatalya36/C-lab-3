#include "task6.h"
void generateAndFind(int arr[], int N, int* minPos, int* maxPos)
{
    srand(time(0));
    int min = INT_MAX, max = INT_MIN;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000;
        if (rand() % 2)
            arr[i] = -arr[i];
        if (arr[i] < min)
        {
            min = arr[i];
            *minPos = i;
        }
        if (arr[i] > max)
        {
            max = arr[i];
            *maxPos = i;
        }
    }
}
int getSumMaxMin(int arr[], int N)
{
    int first, second;
    generateAndFind(arr, N, &first, &second);  
    if (first > second)
    {
        int tmp = second;
        second = first;
        first = tmp;
    }
    int sum = 0;
    for (int i = first + 1; i < second; i++)
    {
        sum += arr[i];
    }
    return sum;
}