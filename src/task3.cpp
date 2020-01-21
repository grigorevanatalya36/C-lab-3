#include <string.h>

int getMaxWord(char buf[], char word[])
{
	if (*buf != 0 && buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	int inWord = 0;
	int count = 0;
	int maxLe = 0;
	char* maxWord = { "0" };
	word[0] = '\0';
	for (int i = 0; i < 256; i++)
	{
		if (buf[i] != ' ' && inWord == 0) // 1 ent
		{
			inWord = 1;
		}
		else if (inWord==1 && (buf[i] == ' ' || buf[i] == '\0')) // 4 ex
		{
			inWord = 0;
			if (count > maxLe) // 5 max
			{
				maxLe = count;
				maxWord = &buf[i] - count; 
			}
			count = 0;
			if (buf[i] == '\0')
				break;
		}
		if (inWord==1) // 2 schet dlinn slova
			count++;
	}
	if (maxWord && *maxWord != ' ' && *maxWord != '\0') // pishem slovo 
	{
		for (int j = 0; j < maxLe; j++)
		{
			word[j] = *(maxWord + j);
		}
		word[maxLe] = '\0';
	}
	return maxLe;
}