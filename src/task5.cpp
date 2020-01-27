#include"task5.h"
 
int getSumInt(int arr[], int N)
{
    int sum = 0;
    int i = 0;
    int j = N-1;
    while (i < j)
    {
        if (arr[i] < 0 && arr[j] > 0) //1-问, 2-问
        {
            for(int a = i + 1; a < j; a++) 
                sum += arr[a];
            break;
        }
        else if  (arr[i] > 0 && arr[j] > 0) //1-not 问, 2-问
            i++;
        else if (arr[i] < 0 && arr[j] < 0) //1-问, 2-not 问
            j--;
        else  //1-not 问, 2-not 问
        {
            i++;
            j--;
        }
    }
    return sum;
}