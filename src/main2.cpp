#include <stdio.h>
#include <string.h>

void replaceLastCharacter(char* line)
{
	if (line[strlen(line) - 1] == '\n')
		line[strlen(line) - 1] = '\0';
}

void printWord(char *pword, int cletter)
{
	int j = 0;
	for (j = 0; j < cletter; j++)
		printf("%c", *(pword + j));
	printf(" - %d", cletter);
	putchar('\n');

}

int main()
{

	int cletter = 0; 
	char* pword = 0; 
	int i = 0;
	int inWord = 0;
	int count = 0; 
	char buf[256];
	printf("Enter a line:\n");
	fgets(buf, 256, stdin);

	replaceLastCharacter(buf);


	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			pword = buf + i; 
			inWord = 1;
			cletter++;
			count++;
		}
		else if (buf[i] != ' ' && inWord == 1) 
			cletter++;
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
			printWord(pword, cletter);
			cletter = 0;
			pword = 0;
		}
			
		i++;
	}
	if (pword!=NULL)
		printWord(pword, cletter);
	printf("Number of words - %d", count);
	return 0;
}
