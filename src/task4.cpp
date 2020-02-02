#include "task4.h"
#include <stdio.h>
#include <stdlib.h>

int getSum(char buf[])
{
    int sum = 0, i = 0, count = 0, sim = 0;


    while(buf[i])  // считываем строку посимвольно, все цифры складываем и помещаем в переменную sum
    {
        if ('0' > buf[i] || buf[i] > '9')
        {
            if (sim == 1)
            {
                sum += count;
                count = 0;
                sim = 0;
            }

            i++;
        }
        else if (('0' <= buf[i] <= '9') && sim == 0)
        {
            sim = 1;
            count = (count * 10) + (buf[i] - '0');
            i++;
        }
        else if (('0' <= buf[i] <= '9') && sim == 1)
        {
            count = (count * 10) + (buf[i] - '0');
            if (count > 99999)
            {
                sum += count;
                sim = 0;
            }
            i++;
        }
    }
        return sum;
    





        




}