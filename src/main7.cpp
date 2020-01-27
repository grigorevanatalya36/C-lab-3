#include <stdio.h>
#include <string.h>

int main()
{
    char line[255] = { 0 };
    char count[255] = { 0 };
    int i = 0, j = 0, max = 0;
    printf(" Enter your line: ");
    fgets(line, 255, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    while (line[i])
    {
        count[line[i]]++;
        i++;
    }
    for (j = 0; j < 255; j++)
    {
        if (count[j] > max)
            max = count[j];
    }

    for(max; max > 0; max--)
        for (j = 0; j < 255; j++)
        {
            if (count[j] == max)
                printf("%c = %d\n", j, count[j]);
        }


    return 0;
}