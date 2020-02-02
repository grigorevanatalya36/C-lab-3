#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int count; //счётчик длинны слова
	int inWord = 0; //длинна самого длиннного слова
	int i; //счётчик элементов введенной строки
	int line = 0; //отметка начала длинного слова
	int j = 0; //счтётчик элементов для массива длинного слова

	if (buf[strlen(buf) - 1] == '\n') //считывание начала строки
		buf[strlen(buf) - 1] = 0; //удаление \n

	for (i = 0; buf[i] != '\0'; i++)
	{
		for (count = 0; buf[i] != '\0' && buf[i] != ' '; i++) //находим слово
		{
			count++; //считаем количесвто букв в слове
		}
		if (count > inWord) //определяем самое длинное слово
		{ 
				inWord = count;
				line = i - count;
				for (i = line; i <= (inWord + line); i++)
				{
					word[j] = buf[i];
					j++;
				}
				j = 0;
		}
		
	}
	return inWord;	
}