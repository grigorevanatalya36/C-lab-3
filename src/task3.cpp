#include "task3.h"
#include<string.h>
#include<stdio.h>


int getMaxWord(char buf[],char word[])
{
    int i = 0,count=0,lenght=0;
    char *arr = strtok(buf," ");//token-checking pointer
    while(arr!=NULL)
    {
       lenght = strlen(arr);
       if(lenght > count)
       {
	  strcpy(word,arr);//comparing a word array with a delimiter
	  count = lenght;
       }
       arr = strtok(NULL," ");
       i++;
    }
    return count;
}
