#include<stdio.h>
#include<string.h>

# define N 256

int main()
{
    char words[N] = { 0 };
    char number[N] = { 0 };
    int i = 0;
    int j = 0;
    int max = 0;
    printf("Enter a string: ");
    fgets(words, N-1, stdin);
    if (words[strlen(words) - 1] == '\n')
        words[strlen(words) - 1] = '\0';
    while (words[i])
    {
        number[words[i]]++;
        i++;
    }
    for (j = 0; j < N; j++)
    {
        if (number[j] > max)
            max = number[j];
    }
    for (max; max > 0; max--)
    {
        for (j = 0; j < N; j++)
        {
            if (number[j] == max)
                printf("%c - %d\n", j, number[j]);
        }
    }
    return 0;
}