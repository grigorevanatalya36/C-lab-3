#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"task4.h"

int getSum(char buf[])
{
	int sum = 0;
	int i = 0;
	int k;
	char line_for_atoi[4] = { 0 };  // 3 simbols + '\0'

	while (buf[i] != '\0')
	{
		if (!((buf[i] >= '0') && (buf[i] <= '9'))) //skipping letters, because atoi degins to read numbers or ' '. 
			i++;
		else if ((buf[i] >= '0') && (buf[i] <= '9'))
		{
			for (k = 0; k < 3; k++) //filling 3 cells whis numbers and characters.
			{
				line_for_atoi[k] = buf[i];

				if (i == (strlen(buf) - 1)) //if the last simbol in buf[i] is number.
				{
					line_for_atoi[k] = '\0'; //the next cell of line_for_atoi can to de '\0'. NOT "TRASH"!
					sum += atoi(line_for_atoi); //our sum.
					//printf("sum=%d \n", sum);  //for debugging
					break;
				}
				//printf("m[%d]= %c\n", k, line_for_atoi[k]); //for debugging
				i++;
			}

			if (k == 3) //the last cell of line_for_atoi can to de '\0'. NOT "TRASH"!
			{
				line_for_atoi[k] = '\0';
				//printf("m[%d]= %c\n", k, line_for_atoi[k]); //for debugging
				sum += atoi(line_for_atoi);  //our sum.
				//printf("sum=%d \n", sum);  //for debugging
				k = 0;
				//printf("i=%d  k=%d  \n\n", i, k); //for debugging
			}
		}
	}

	return sum; //our sum.
}