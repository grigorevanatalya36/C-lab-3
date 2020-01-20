#include "task6.h"
#include<stdlib.h>
#include<stdio.h>
#include<time.h>
#define N 10

int main(void)
{
   int arr[N];
   int i;
   srand(time(NULL));
   for(i = 0; i < N;i++)
    arr[i] = rand() % 100 - 50 ;
   puts("Generated Array!");
   for(i = 0 ;i< N; i++)
     printf("% d",arr[i]);
   putchar('\n');
   printf("Summary is = %d",getSumMaxMin(arr,N));
   return 0;
}
   
