#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include <stdio.h>
#include <string.h>

int wordCount(char buf[])
{
	int linelength = strlen(buf) - 2;
	int number = 0;

	for (int i = 0; i <= linelength; i++)
	{
		int k = 0;
		while ((buf[i] == ' ') && (i <= linelength))
		{
			i++;
		}
		while ((buf[i] != ' ') && (i <= linelength))
		{
			i++;
			k = 1;
		}
		if (k == 1) { number++; }
	}

	return number;
}