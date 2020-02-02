#include <string.h>
#include <stdio.h>
int getMaxWord(char buf[], char word[])
{
	int inword = 0;
	int count = 0;
	int i = 0;
	int max = 0;
	char* p = 0;
	int a = 0;
	while (buf[i])
	{
		if (buf[i] != ' ' && inword == 0)
		{
			count++;
			inword = 1;
		}
		else if (buf[i] != ' ' && inword == 1)
		{
			count++;
		}
		else if (buf[i] == ' ' && inword == 1)
		{
			inword = 0;
			if (max < count)
			{
				max = count;
				p = &buf[i - count];
			}
			count = 0;
		}
		i++;
	}
	if (inword == 1 && max < count)
	{
		max = count;
		p = &buf[i - count];
	}
	while (*p != ' ' && *p != '\0' && *p != '\n')
	{
		word[a] = *p;
		*p++;
		a++;
	}
	return max;
}