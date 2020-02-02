#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "task6.h"
#define N 24
    
int main()
{
        int arr[N] = { 0 };
        int i = 0;
        srand(time(NULL));
        rand();

        while (i < N)
        {
            int random = rand() % 2;
            switch (random)
            {
            case 1:
                arr[i] = 1 + rand() % (9 - 1 + 1);
                break;
            case 0:
                arr[i] = (1 + rand() % (9 - 1 + 1)) * (-1);
                break;
            }
            printf("%d ", arr[i]);
            i++;
        }
        puts("\n"); 
        printf("Summ = %d \n", getSumMaxMin(arr, N));
        return 0;
}