int getSum(char buf[])
{
	int inNumber = 0, //флаг нахождения в числе
		sum = 0, //сумма чисел
		i = 0,
		bufer = 0; // буфер для чисел
	while (buf[i]) // считаем сумму чисел в строке
	{
		if (47 > buf[i] || buf[i] > 58)//между чисел
		{
			if (inNumber == 1)
			{
				sum = sum + bufer;
				bufer = 0;
				inNumber = 0;
			}
			i++;
		}
		else if ((47 < buf[i] < 58) && inNumber == 0)//только что попали на число
		{
			inNumber = 1;
			bufer = bufer * 10 + (buf[i] - 48);
			i++;
		}
		else if ((47 < buf[i] < 58) && inNumber == 1)//в числе
		{
			bufer = bufer * 10 + (buf[i] - 48);
			if (bufer > 99999)
			{
				sum = sum + bufer;
				bufer = 0;
				inNumber = 0;
			}
			i++;
			if (!buf[i])//наступил конец строки сразу после конца числа
				sum = sum + bufer;
		}
		else
			i++;
	}
	return sum;
}