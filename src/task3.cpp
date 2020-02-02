// Clab3 task3

#include "task3.h"

int getMaxWord(char buf[], char word[])
{
	int inWord = 0, count = 0, length = 0, address = 0;
	// counter - счетчик длины слова, address - адрес первой буквы самого длинного слова

	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';

	
	for (int i = 0; i <= strlen(buf); i++)
	{
		if ((buf[i] == ' ' || buf[i] == '\0') && inWord == 1)
		{
			inWord = 0;

			if (count > length)
			{
				length = count;
				address = i - length;
				word[length] = '\0';

				int j = 0;
				for (address; address < i; address++)
				{
					word[j] = buf[address];
					j++;
				}
			}

			count = 0;
		}
				
		else if (buf[i] != ' ' && inWord == 0)
		{
			inWord = 1;
			count++;
		}

		else if (buf[i] != ' ' && inWord == 1)
		{
			count++;
		}
					
	}
	return length;
}


