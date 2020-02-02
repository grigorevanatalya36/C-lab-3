#include "task6.h"
void generateArr(int arr[], int N)
{
    srand(time(0));
    int min = 10000000, max = -10000000;
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 1000;
        if (rand() % 2)
            arr[i] = -arr[i];
    }
}
int getSumMaxMin(int arr[], int N)
{
    int first=1000000, second=-100000,firstPos=0,secondPos=0;
    for (int i = 0; i < N; i++)
    {
        if (arr[i] < first)
        {
            first = arr[i];
            firstPos = i;
        }
        if (arr[i] > second)
        {
            second = arr[i];
            secondPos = i;
        }
    }
    if (firstPos > secondPos)
    {
        int tmp = secondPos;
        secondPos = firstPos;
        firstPos = tmp;
    }
    int sum = 0;
    for (int i = firstPos + 1; i < secondPos; i++)
    {
        sum += arr[i];
    }
    return sum;
}