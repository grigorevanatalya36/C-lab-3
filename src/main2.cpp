#include <stdio.h>
#include <string.h>
#define SIZE 128

int inword(int flag, char ch)
{
    if (flag == 0 && ch != ' ')
        return 0;
    else if (flag == 1 && ch != ' ')
        return 1;
    else if (flag == 1 && ch == ' ')
        return 2;
}

int main()
{
    char line[SIZE] = { 0 };

    printf("Input the line\n");
    fgets(line, SIZE, stdin);

    if (line[strlen(line) - 1] == '\n')
        line[strlen(line) - 1] = '\0';

    int i = 0, flag = 0, wordsize = 0;
    while(line[i])
    {
        switch (inword(flag,line[i]))
        {
        case 0:
            flag = 1;
            wordsize++;
            putchar(line[i]);
            break;
        case 1:
            wordsize++;
            putchar(line[i]);
            break;
        case 2:
            flag = 0;
            printf(" %d\n", wordsize);
            wordsize = 0;
            break;
        }
        i++;
    }
    if (flag == 1 && i == strlen(line))
        printf(" %d\n", wordsize);

    return 0;
}