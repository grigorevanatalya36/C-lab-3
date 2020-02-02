#include<stdio.h>
#include<string.h>
#define N 256
int main()
{
    char line[N] = { 0 };
    char count[N] = { 0 };
    int i = 0;
    int j = 0;
    int max = 0;
    printf("Enter a line:\n");
    fgets(line, 255, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    while (line[i])
    {
        count[line[i]]++;
        i++;
    }
    for (j = 0; j < N; j++)
    {
        if (count[j] > max)
            max = count[j];
    }
    for(max; max > 0; max--)
        for (j = 0; j < N; j++)
        {
            if (count[j] == max)
                printf("%c - %d\n", j, count[j]);
        }
    return 0;
}