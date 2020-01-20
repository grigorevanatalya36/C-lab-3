#include "task1.h"
#include <stdio.h>
#include<string.h>
#define N 256

int main(void)
{
   char buf[N];
   puts("Enter the Line!");
   fgets(buf,N,stdin);
   if(buf[strlen(buf)-1]=='\0')
      buf[strlen(buf)-1]=0;
   int result = wordCount(buf);
   printf("%d",result);
   return 0;
}
