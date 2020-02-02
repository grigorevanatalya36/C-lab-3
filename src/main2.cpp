#include <stdio.h>
#include <string.h>

int main()
{
    char line[128];
    int i = 0,
        inWord = 0,
        countWords = 0,
        countLetters = 0;

    printf("Enter a line:\n");
    fgets(line, 128, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    while (line[i])
    {
        if (line[i] != ' ' && inWord == 0)
        {
            countWords++;
            countLetters++;
            inWord = 1;
            putchar(line[i]);
        }
        else if (line[i] != ' ' && inWord == 1)
        {
            countLetters++;
            putchar(line[i]);
        }
        else if (line[i] == ' ' && inWord == 1)
        {
            inWord = 0;
            printf(" - %d\n", countLetters);
            countLetters = 0;
        }
        i++;
    }

    if (line[i] == '\0' && inWord == 1)
        printf(" - %d\n", countLetters);

    printf("You entered %d words\n", countWords);
    
    return 0;
}