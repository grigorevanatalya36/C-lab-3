#include"task1.h"
#define N 256

int main()
{
    char buf[N] = { 0 };
    printf("enter a line\n");
    fgets(buf, N, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    printf("line contains:%d words\n", wordCount(buf));
    return 0;
}