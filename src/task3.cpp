int getMaxWord(char buf[], char word[])
{
	int inWord = 0, //флаг нахождения в слове
		i = 0,
		j = 0,
		position = 0, //позиция первой буквы слова
		maxLetters = 0, //максимум букв
		count = 0; //счетчик букв
	while (buf[i]) // считаем количество слов
	{
		if (buf[i] == ' ')//между слов
		{
			if (maxLetters < count)
			{
				maxLetters = count;
				for (j = 0 ; position < i; position++, j++)
				{
					word[j] = buf[position];
				}
				count = 0;
			}
			count = 0;
			inWord = 0;
			i++;
		}
		else if (buf[i] != ' ' && inWord == 0)//только что вошли в слово
		{
			position = i;
			inWord = 1;
			count++;
			i++;
		}
		else if (buf[i] != ' ' && inWord == 1)//в слове
		{
			i++;
			count++;
			if (!buf[i])//наступил конец строки сразу после конца слова
			{
				if (maxLetters < count)
				{
					maxLetters = count;
					for (j = 0; position < i; position++, j++)
					{
						word[j] = buf[position];
					}
					count = 0;
				}
			}
		}
	}
	return maxLetters;
}