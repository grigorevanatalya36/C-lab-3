#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define N 128
void replaceLastCharacter(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

int main()
{

	char str[256] = { 0 };
	printf("Enter a line:\n");
	fgets(str, 256, stdin);

	int count[N] = { 0 };
	int scount[N] = { 0 };
	char symbols[N] = { 0 };
	int i = 0, j = 0;
	int imax = 0;
	int tcount = 0;
	char tsymbol = 0;
	int dl = 0;
	
	replaceLastCharacter(str);


	i = 0;
	while (str[i])
	{
		count[str[i]]++;
		i++;
	}

	for (i = 0; i < N; i++)
		if (count[i] > 0)
		{
			symbols[dl] = (char)i;
			scount[dl] = count[i];
			dl++;

		}

	for (i = 0; i < dl - 1; i++)
	{
		imax = i;
		for (j = i + 1; j < dl; j++)
		{
			if (scount[imax] < scount[j])
				imax = j;
		}
		tcount = scount[i];
		tsymbol = symbols[i];
		scount[i] = scount[imax];
		symbols[i] = symbols[imax];
		scount[imax] = tcount;
		symbols[imax] = tsymbol;
	}

	for (i = 0; i < N; i++)
		if (scount[i] > 0)
			printf("%c - %d\n", symbols[i], scount[i]);

	return 0;
}