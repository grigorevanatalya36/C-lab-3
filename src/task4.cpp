#include "task4.h"
int getSum(char buf[])
{
    int len = strlen(buf)-1;
    int power = 0;
    int sum = 0;
    for (int i = len; i >= 0; i--)
    {
        if (power >= 10)
            power = 0;
        if (buf[i]>='0' &&buf[i]<='9')
        {
            sum += (buf[i] - '0')* pow(10,power);
            power++;
        }
        else
        {
            power = 0;
        }
    }
    return sum;
}