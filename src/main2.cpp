#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];
	int counti = 0, inWord = 0;
	int i = 0;
	int wcounter = 0;

	printf("enter a line: ");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = 0;

	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{/*начало слова*/
			inWord = 1;
			counti=1;
			wcounter++;
			putchar(buf[i]);
		}
		else if (buf[i] != ' ' && inWord == 1)
		{/*в слове*/
			counti++;
			putchar(buf[i]);
		}
		else if (buf[i] == ' ' && inWord == 1)
		{/*конец слова*/
			inWord = 0;
			printf("-%d\n", counti);
			
			counti = 0;
		}
		i++;
	}
	if (inWord == 1) 
	{
		/*последнее слово не завершено*/
		printf(" - %d\n", counti);
	}
	printf("Word number - %d\n", wcounter);
	return 0;
}