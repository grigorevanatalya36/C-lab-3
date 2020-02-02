#include "task1.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char buf[256];

    printf("Enter string\n");
    fgets(buf, 256, stdin);

    printf("%i\n", wordCount(buf));

    return 0;
}