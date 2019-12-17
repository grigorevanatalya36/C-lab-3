#include "task1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[SIZE] = { 0 };

    printf("Input the line\n");
    fgets(buf, SIZE, stdin);

    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    printf("Number of words is %d\n", wordCount(buf));
    return 0;
}