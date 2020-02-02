#include <stdio.h>
#include <string.h>
#include "task1.h"

int wordCount(char buf[])
{
	int inWord = 0, i = 0, count = 0;
	
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{/*начало слова*/
			count++;
			inWord = 1;
		}
		
		else if (buf[i] == ' ' && inWord == 1)
		{/*конец слова*/
			inWord = 0;
		}
		i++;
	}

return count;
}

