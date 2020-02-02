#include <string.h>
#include <stdlib.h>
int getSum(char buf[])
{
	if (buf[strlen(buf) - 1] == '\n')
		buf[strlen(buf) - 1] = '\0';
	int i = 0, inNumb = 0, num = 0,count = 0, j=0, sum = 0;
	char arr[256] = {'\0'};
	while (buf[i])
	{
		if ((buf[i] >= '0' && buf[i] <= '9')&& inNumb == 0)
		{
			count++;
			inNumb = 1;
			arr[j] = buf[i];
			j++;
		}
		else if ((buf[i] >= '0' && buf[i] <= '9') && inNumb == 1)
		{
			if (count == 3)
			{
				arr[i] = '\0';
				num = atoi(arr);//использование функции стандартной библиотеки stdlib.h
				sum += num;
				for (int a = 0; arr[a]!='\0';a++)
				{
					arr[a] = '\0';
				}
				j = 0;
				count = 0;
				continue;
			}
			count++;
			arr[j] = buf[i];
			j++;
		}
		else if (((buf[i]>'9') || (buf[i]<'0')) && inNumb == 1)
		{
			inNumb = 0;
			count = 0;
			arr[i] = '\0';
			num = atoi(arr);
			sum += num;
			for (int a = 0; arr[a]!= '\0'; a++)
			{
				arr[a] = '\0';
			}
			j = 0;
		}
		i++;
	}
	if (inNumb == 1)
	{
		arr[count] = '\0';
		num = atoi(arr);
		sum += num;
	}
	return sum;
}