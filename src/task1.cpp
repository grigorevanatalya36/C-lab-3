int wordCount(char buf[])
{
	int count = 0, inWord = 0, i = 0;
	while (buf[i])
	{
		if (buf[i] != ' ' && inWord == 0)
		{
			count++;
			inWord = 1;
		}
		else if (buf[i] == ' ' && inWord == 1)
		{
			inWord = 0;
		}
		i++;
	}
	return count;
}