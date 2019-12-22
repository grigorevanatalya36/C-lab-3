#include <stdio.h>
#include <string.h>
#include "task4.h"

int main()
{
    char buf[128];

    printf("Enter a line of numbers and letters:\n");
    fgets(buf, 128, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    printf("Sum of numbers you entered is %d\n", getSum(buf));

    return 0;
}