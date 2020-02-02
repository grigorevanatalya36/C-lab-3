#include "task5.h"
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 255

int main()
{
    time_t now;
    time(&now);
    srand(now);

    int data [N] = { 0 };
    
    for (int x = 0; x < N; x++)
    {
        switch (rand() % 2)
        {
           case 0:
          {
            data[x] = rand() % 100;
            break;
          }
           case 1:
           {
               data[x] = rand() % 100 * - 1;
               break;
           }
        }
    }
   
    printf("Your summa is: %d ", getSumInt(data, N));


        return 0;
}