#include"task6.h"

int getSumMaxMin(int arr[], int N)
{
    int sum = 0;
    int i = 0;
    int j = N - 1;
    int maxNumber = -9; // -9 = minimum possible number in arr[]
    int minNumber = 9;  // 9 = maximum possible number in arr[]
    int iMax = 0;       
    int iMin = 0;
    for (int a = 0; a <= j; a++)                 
    {
        if (arr[a] > maxNumber)
        {
            maxNumber = arr[a];
            iMax = a;
        }
        if (arr[a] < minNumber)
        {
            minNumber = arr[a];
            iMin = a;                          
        }
    }
    printf("max number:%d\n", maxNumber);
    printf("min number:%d\n", minNumber);
    if (iMax > iMin)  
    {
        for (int b = iMin + 1; b < iMax; b++)
            sum += arr[b];
    }
    else                                            // if iMax < iMin
        for (int b = iMax + 1; b < iMin; b++)
            sum += arr[b];
    return sum;
}