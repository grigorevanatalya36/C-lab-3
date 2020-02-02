#include <string.h>

int getSum(char buf[])
{
    if (*buf != 0 && buf[strlen(buf) - 1] == '\n')
        buf[strlen(buf) - 1] = '\0';

    int maxSizeOfNumber = 2;
    int inNumber = 0;
    int digit = 0;
    int value = 0;
    int sum = 0;
    int number = 0;

    for (int i = 0; i < 512; i++)
    {
        number = buf[i] - '0';
        if (number < 10 && number >= 0 && inNumber == 0)
            inNumber = 1;
        else if (inNumber && (number < 0 || number >= 10))
        {
            inNumber = 0;
            sum += value;
            value = 0;
            digit = 0;
        }
        if (buf[i] == '\0')
            break;
        if (inNumber)
        {
            if (digit == maxSizeOfNumber )
            {
                sum += value;
                value = 0;
                digit = 0;
            }
            value = value * 10 + number;
            digit++;
        }
    }

    return sum;
}