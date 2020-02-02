#include "task1.h"
#include <string.h>

int wordCount(char buf[])
{
    int count = 0 , result =0;
    int size = strlen(buf);
    int flag=0;
    int i;
    for(i = 0 ; i < size -1; i++)
    {
	if(buf[i] =' ' && buf[i+1]!=' ' &&flag==0)
	{
	   flag =1;
	   count++;
	}
	else if(buf[i]!=' ' && buf[i+1] ==' '&&flag==1)
	{
	   flag=0;
	}
	else if(buf[i]=='\0' || buf[i+1]=='\n')
	{
	   result+=count;
	   count=0;
	}
    }
    return result;
}

