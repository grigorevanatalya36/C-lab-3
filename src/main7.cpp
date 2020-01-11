#include <stdio.h>
#include <string.h>
#define SIZE 50
struct Symbol
{
    char symbol;
    int freq=0;
};
int main7()
{
    char buf[SIZE];
    fgets(buf, SIZE, stdin);
    Symbol arr[128];
    for (int i = 0; i < 128; i++)
        arr[i].symbol = i;
    int len = strlen(buf);
    for (int i = 0; i < len; i++)
    {
        arr[buf[i]].freq++;
    }
    for (int i = 0; i < 128-1; i++)
    {
        for (int j = 0; j < 128-1; j++)
        {
            if (arr[j].freq < arr[j + 1].freq)
            {
                Symbol tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < 128; i++)
        if(arr[i].freq>0)
            printf("%c %d\n", arr[i].symbol, arr[i].freq);
    return 0;
}
