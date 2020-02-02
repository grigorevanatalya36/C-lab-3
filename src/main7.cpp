#include<stdio.h>
#include<string.h>
#define N 256

int main(void)
{
  char buf[N];
  char word[N];
  int freq[N];
  int i , j , tmp;
  puts("enter the string");
  fgets(buf,N,stdin);
  if(buf[strlen(buf)-1]=='\0')
     buf[strlen(buf)-1]=0;
  for(i = 0 ; buf[i];i++)
   {
      j = 0;
      while(buf[i]!=word[j] && word[j]!='\0')
       {
	 j++;
       }
      word[j]=buf[i];
      (freq[j])++;
   }
   for(i = 0; i!=j;i++)
   {
      for(int k = 0 ; k !=i;k++)
	 {
            if(freq[i] > freq[k])
	    {
	      tmp = freq[k];
	      freq[k] =  freq[i];
	      freq[i]=tmp;
	      tmp = word[k];
	      word[k]=word[i];
	      word[i]=tmp;
	    }
	 }
   }
   i=0;
   while(word[i+1]!='\0')
   {
      printf("%c = %d\n",word[i],freq[i]);
      i++;
   }
   return 0;
}
