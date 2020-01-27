#include "task5.h"


int getSumInt(int arr[], int N)
{
    int sum = 0, otr = 0, plus = N;

    while (arr[otr++] > 0); //  ищем первое отрицательное число
    
    while (arr[plus--] < 0); // ищем последнее положительное число
   
    for (int p = otr; p <= plus; p++) // находим сумму элементов
        sum = sum + arr[p];

    
    return sum;
}