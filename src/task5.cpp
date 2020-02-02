#include "task5.h"
#include <stdlib.h>
#include<stdio.h>
#include <time.h>

int getSumInt(int arr[],int N)
{
   int i = 0; int j = N-1;
   while(i < N)
   {
      if(arr[i] < 0)
	break;
      else if(arr[i]>0)
	i++;
   }
   while(j >=0)
   {
      if(arr[j] >0)
	break;
      else if(arr[j] <0)
	j--;
   }
   i++;
   j--;
   int sum = 0;
   while(i <=j)
   {
     sum+=arr[i];
     i++;
   }
   return sum;
}
