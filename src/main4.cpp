#include <stdio.h>
#include "task4.h"
#define SIZE 50
int main()
{
    char buf[SIZE];
    fgets(buf, SIZE, stdin);
    printf("%d", getSum(buf));
    getc(stdin);
    return 0;
}