#include "task4.h"
#include<stdio.h>
#include<string.h>
#define N 256

int main(void)
{
   char buf[N];
   puts("Enter the string");
   fgets(buf,N,stdin);
   if(buf[strlen(buf)-1]=='\0')
      buf[strlen(buf)-1]=0;
   printf("Summary is : %d \n",getSum(buf));
   return 0;
}
