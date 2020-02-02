int getSumInt(int arr[], int N)
{
	int sum = 0,
		min = 0,
		max = 0,
		i = 0;
	while (arr[i])
	{
		if (arr[i] < 0)
		{
			min = i + 1;
			break;
		}
		i++;
	}
	i = N-1;
	while (arr[i])
	{
		if (arr[i] > 0)
		{
			max = i - 1;
			break;
		}
		i--;
	}
	for (i = min; i<=max ;i++)
	{
		sum = sum + arr[i];
	}

	return sum;
}