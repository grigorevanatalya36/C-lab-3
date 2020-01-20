#include<stdio.h>
#include<string.h>
#define N 256

int main(void)
{
   int count = 0 ,i=0,flag=0;
   char buf[N] = {0};
   puts("enter the line!");
   fgets(buf,N,stdin);
   if(buf[strlen(buf)-1]=='\0')
      buf[strlen(buf)-1]=0'
   while(buf[i])
   {
      if(buf[i]!=' ' && flag==0)
      {
	flag=1;
	count++;
	putchar(buf[i]);
      }
      else if(buf[i]!=' '&&flag==1)
      {
	count++;
	putchar(buf[i]);
      }
      else if(buf[i]==' ' && flag ==1)
      {
	printf("-%d\n",count);
	flag=0;
	count=0;
      }
      if(buf[i]=='\n')
	break;
      i++;
   }
   return 0;
}
