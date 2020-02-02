#include "task4.h"
#include <stdio.h>

int main()
{
    char buf[SIZE] = { 0 };
    
    printf("Input the line\n");
    fgets(buf, SIZE, stdin);
    
    printf("%d", getSum(buf));

    return 0;
}