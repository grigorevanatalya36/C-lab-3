#include "task6.h"
#include<time.h>
#include<stdlib.h>
#include<stdio.h>

int getSumMaxMin(int arr[],int N)
{
   int min_arr = 0 , max_arr =0;
   int Min = 0 , Max =0;
   int sum = 0;
   for(int i = 0 ; i < N;i++)
   {
       if(min_arr < arr[i])
        {
	   min_arr = arr[i];
	   Min = i;
	}
       else if(max_arr > arr[i])
       {
	   max_arr = arr[i];
	   Max =i;
       }
   }
   if(Min > Max)
   {
       int tmp = Min;
       Min = Max;
       Max = tmp;
   }
   
   for(int i = Min;i<Max;i++)
      sum+=arr[i];
   return sum;
}
