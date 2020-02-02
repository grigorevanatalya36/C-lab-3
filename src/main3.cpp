#include<stdio.h>
#include <string.h>
#include "task3.h"
#define N 256
int main(void)
{
   char word[N];
   char buf[N];
   puts("Enter the line!");
   fgets(buf,N,stdin);
   if(buf[strlen(buf)-1]=='\0')
      buf[strlen(buf)-1]=0;
   printf("The longest ord is %s consist of %d symbols",
	word,getMaxWord(buf,word));
   return 0;
}
