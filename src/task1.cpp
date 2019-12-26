int wordCount(char str[])
{
	int inWord = 0, //флаг нахождения в слове
		count = 0, // счетчик слов
		i = 0;
	while (str[i]) // считаем количество слов
	{
		if (str[i] == ' ')//между слов
		{
			inWord = 0;
			i++;
		}
		else if (str[i] != ' ' && inWord == 0)//только что вошли в слово
		{
			inWord = 1;
			count++;
			i++;
		}
		else if (str[i] != ' ' && inWord == 1)//в слове
			i++;
	}
	return count;
}