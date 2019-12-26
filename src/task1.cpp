#include<stdio.h>
#include<string.h>
#include"task1.h"

int wordCount(char buf[])
{
	int count = 0;  //word counter.
	int flag = 0;  // flag - in word=1, uot of a word=0.

	for (int i = 0; i < (strlen(buf) - 1); i++)  //this cycle up '\0'
	{
		if (buf[i] == ' ' && flag == 0) // it's  ' '.
			;
		else if (buf[i] != ' ' && flag == 0)  // new word
		{
			flag = 1; // in word
			count++;
		}
		else if (buf[i] != ' ' && flag == 1) // continuation of the word
			;
		else if (buf[i] == ' ' && flag == 1)
			flag = 0; //out of a word
	}

	return count;
}