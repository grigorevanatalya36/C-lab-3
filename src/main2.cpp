#include <stdio.h>
#include <string.h>
int main()
{
	char str[256];
	int inword = 0;
	int count = 0;
	int i = 0;
	printf("Please enter string\n");
	fgets(str, 256, stdin);
	int j = 0;
	if (str[strlen(str) - 1] == '\n')
		str[strlen(str) - 1] = '\0';
	while (str[i])
	{
		if (str[i] != ' ' && inword == 0)
		{
			count++;
			inword = 1;
			printf("%c", str[i]);
		}
		else if (str[i] != ' ' && inword == 1)
		{
			count++;
			printf("%c", str[i]);
		}
		else if (str[i] == ' ' && inword == 1)
		{
			inword = 0;
			printf(" - %d\n", count);
			count = 0;
		}
		i++;
	}
	if (inword == 1)
		printf("- %d\n", count);
	return 0;
}

