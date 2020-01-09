#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int wordCount(char buf[])
{
	int count = 0;
	int inWord = 0;
	int i = 0;
	
	
	if (buf[strlen(buf) - 1] == '\n') //считывание начала строки
		buf[strlen(buf) - 1] = 0; //удаление \n

	while (buf[i])//проход по строке
	{
		if (buf[i] != ' ' && inWord == 0) //если  пробели и 0 - начало слова
		{
			count++;
			inWord = 1;	
		
		}
		else if (buf[i] == ' ' && inWord == 1)// если пробел и 1 - конец слова
		{
			inWord = 0;					
		}
		i++;		
	}
	
	
	return count;
}