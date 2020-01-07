#include "task5.h"
void generate(int arr[], int N, int* start, int* end)
{
    int first = 0;
    srand(time(NULL));
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000;
        if (rand() % 2)
        {
            arr[i] = -arr[i];
            if (first == 0)
            {
                *start = i;
                first = 1;
            }
        }
        else
            *end = i;
    }
}
int getSumInt(int arr[], int N)
{
   int start, end;
   generate(arr, N,&start,&end);
    int sum = 0;
    
    for (int i = start+1; i < end; i++)
    {
        sum += arr[i];
    }
    return sum;
}