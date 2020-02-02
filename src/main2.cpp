#include <stdio.h>
#include <string.h>

int main()
{
    char line[256] = { 0 };
    printf("Enter a line ");
    fgets(line, 256, stdin);
    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';
    int InWord = 0;
    int count = 0;
    int i = 0;
    while (line[i])
    {
        if (line[i] != ' ' && InWord == 0)//начало слова
        {
            InWord = 1;
            count++;
            putchar(line[i]);
        }
        else if (line[i] != ' ' && InWord == 1)//в слове
        {
            count++;
            putchar(line[i]);
        }
        else if (line[i] == ' ' && InWord == 1)//конец слова
        {
            InWord = 0;
            printf(" - %d\n", count);
            count = 0;
        }
        i++;
    }
    if (InWord == 1)
        printf(" - %d\n", count);
    return 0;
}