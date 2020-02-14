int getSum(char buf[])
{
	int i=0;
	int sum=0;
	int num=0;
	int innum=0;
	while(buf[i])
	{
		if (buf[i]<'0'||buf[i]>'9')
		{
			innum=0;
			sum=sum+num;
			num=0;
			i++;
		}
		else if (buf[i]>='0'&&buf[i]<='9'&&innum==0)
		{
			innum=1;
			num=buf[i]-'0';	
			i++;
			if (!buf[i])
				sum=sum+num;
		}
		else if (buf[i]>='0'&&buf[i]<='9'&&innum<3)
		{
			innum++;
			num=num*10+buf[i]-'0';	
			i++;
			if (!buf[i])
				sum=sum+num;
		}
		else if (buf[i]>='0'&&buf[i]<='9'&&innum>=3)
		{
			innum=0;
			sum=sum+num;
			num=0;
			
		}

	}
	return sum;
}