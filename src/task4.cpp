#include "task4.h"

int getSum(char buf[])
{
    int sum = 0;
    int i = 0;
    int inNumber = 0;
    int number = 0;
    int digit = 1;
    int maxDigit = 3;
    while (buf[i])
    {
        if (buf[i] >= '0' && buf[i] <= '9' && inNumber == 0)//первый разряд числа
        {
            inNumber = 1;
            number = buf[i] - '0';
            digit++;
            i++;
        }
        else if (buf[i] >= '0' && buf[i] <= '9' && inNumber == 1 && digit < maxDigit)//внутри числа
        {
            number = number * 10 + buf[i] - '0';
            digit++;
            i++;
        }
        else if (buf[i] >= '0' && buf[i] <= '9' && inNumber == 1 && digit == maxDigit)//последний разряд
        {
            number = number * 10 + buf[i] - '0';
            sum = sum + number;
            digit = 0;
            inNumber = 0;
            i++;
        }
        else if ((buf[i] < '0' || buf[i] > '9') && inNumber == 1)
        {
            inNumber = 0;
            sum = sum + number;
            digit = 1;
            i++;
        }
        else
            i++;
    }
    if (inNumber==1)
        sum = sum + number;
    return sum;
}
