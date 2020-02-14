int wordCount(char buf[])
{
	int inWord=0;
	int count=0;
	int i=0;
	while (buf[i])
	{
		if (buf[i]==' ')
		{
			inWord=0;
			i++;
		}
		else if (buf[i]!=' '&&inWord==0)
		{
			inWord=1;
			count++;
			i++;
		}
		else if(buf[i]!=' '&&inWord==1)
			i++;
	}
	return count;
}