#include "task5.h"
void generate(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000;
        if (rand() % 2)
        {
            arr[i] = -arr[i];
        }
    }
}
int getSumInt(int arr[], int N)
{
    int start=-1, end;
    int sum = 0;
    for (int i =0; i < N; i++)
    {
        if (start == -1 && arr[i]<0)
            start = i;
        if (arr[i] > 0)
            end = i;
    }
    for (int i = start + 1; i < end; i++)
        sum += arr[i];
    return sum;
}