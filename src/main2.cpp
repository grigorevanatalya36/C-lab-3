#include <stdio.h>
#include <string.h>


int main()
{
	//Написать программу, которая для введённой строки определяет количество слов и 
	//выводит каждое слово на отдельной строке и его длину
	char str[256]={0};
	printf("enter string:\n");
	fgets(str, 256, stdin);
	//printf("%s\n", str);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';

	int letter=0;
	int i=0;
	int inword=0;
	int count=0;
	while(str[i])
	{
		if (str[i]==' ')
		{
			if(inword==1)
			{
				printf (" is %d letters\n", letter);
				letter=0;
						
			}	
			inword=0;					
			i++;			
		}
		if (str[i]!=' '&&str[i]!='\0'&&inword==0)
		{
			printf("%c", str[i]);
			inword=1;
			letter++;
			count++;
			i++;
		}
		if (str[i]!=' '&&inword==1)
		{
			printf("%c", str[i]);
			letter++;	
			i++;
			if (!str[i])
				printf (" is %d letters(end)\n", letter);				
		}
		
	}
	
	printf("%d words\n", count);


	return 0;
}