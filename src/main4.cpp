#include"task4.h"
#define N 256

int main()
{
    char buf[N] = { 0 };
    int b = 0;
    printf("enter a line\n");
    fgets(buf, N, stdin);
    if (buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';
    printf("SUM=%d", getSum(buf));
    return 0;
}