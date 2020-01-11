#include <stdio.h>
#include "task1.h"
int main()
{
    const int SIZE = 50;
    char buf[SIZE];
    fgets(buf,SIZE,stdin);
    printf("%d", wordCount(buf));
    getc(stdin);
    return 0;
}