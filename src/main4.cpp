#include "task4.h"
#include <stdio.h>

int main()
{
    char buf[512];
    
    printf("Enter string\n");
    fgets(buf, 512, stdin);

    printf("%i\n", getSum(buf));

    return 0;
}