#include"task4.h"

int getSum(char buf[])
{
    int sum = 0;
    int inNumber = 0;  //flag
    char atoiNumber[4] = { 0 };  // for atoi
    int num = 0;  
    int i = 0;
    int j = 0;
    while (buf[i])
    {
        if (inNumber == 0 && (buf[i] >= '0' && buf[i] <= '9'))  //number entry
        {
            inNumber = 1;
            atoiNumber[j] = buf[i];
            j++;
        }
        else if (inNumber == 1 && (buf[i] >= '0' && buf[i] <= '9')) // number move
        {
            if (j == 3)   // if number format: XXX
            {
                atoiNumber[j] = '\0';
                num = atoi(atoiNumber);
                sum += num;
                j = 0; 
                continue;
            }
            atoiNumber[j] = buf[i];
            j++;
        }
        else if (inNumber == 1 && (buf[i] < '0' || buf[i] > '9')) // exit from number
        {
            atoiNumber[j]='\0';
            num=atoi(atoiNumber);
            sum+=num;
            inNumber = 0;
            j = 0;
        }
        i++;
    }
    if (inNumber == 1)   
    {
        num = atoi(atoiNumber);
        sum += num;
    }
    return sum;
}