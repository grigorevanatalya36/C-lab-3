#include <string.h>

int wordCount(char buf[])
{
	if (*buf != '\0' && buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	int count = 0;
	int in = 0;
	for (int i = 0; buf[i] != '\0'; i++)
	{
		if (buf[i] != ' ' && in == 0)
		{
			count++;
			in = 1;
		}
		else if (buf[i] == ' ' && in == 1)
		{
			in = 0;
		}
	}
	return count;
}