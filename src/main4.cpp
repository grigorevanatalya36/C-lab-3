#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "task4.h"

int main()
{
	char buf[256]={0};
	printf("vvedite stroku:\n");
	fgets(buf, 256, stdin);
	if(buf[strlen(buf)-1]=='\n')
		buf[strlen(buf)-1]='\0';
	//int num=buf[0]-'0';
	//printf("%d\n", num);
	//num=num+2;

	printf("%d\n", getSum(buf));

	return 0;
}
