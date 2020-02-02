#include <stdio.h>
#include <string.h>

int main()
{
    char line[128];
    int count[128] = {0};
    int a, j = 0, max = 0;

    printf("Enter a line:\n");
    fgets(line, 128, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    for (int i = 0; i < strlen(line); i++)
        count[line[i]]++;

    for (int i = 0; i < 128; i++)
    {
        for (int j = 0; j < 128; j++)
        {
            if (count[j] > 0 && count[j] > max)
            {
                max = count[j];
                a = j;
            }
        }
        if (max == 0) break;
        printf("%c - %d\n", a, max);
        count[a] = 0;
        max = 0;
        i++;
    }
    return 0;
}