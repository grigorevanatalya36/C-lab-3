#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[256];
	printf("stroka s probelami\n");
	fgets(buf, 256, stdin);
	if (*buf != '\0' && buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	int count = 0;
	int in = 0;
	for (int i = 0; i < 256; i++)
	{
		if (buf[i] == '\0')
		{
			if (in==1)
				printf(" - %i\n", count);
			break;
		}
			if (buf[i] != ' ' && in == 0)
				{
					in = 1;
				}
			else if (in==1 && buf[i] == ' ')
				{
					in = 0;
					printf(" - %i\n", count);
					count = 0;
				}
		if (in==1)
		{
			putchar(buf[i]);
			count++;
		}
	}
	return 0;
}