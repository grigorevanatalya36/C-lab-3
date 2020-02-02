int getSumMaxMin(int arr[], int N)
{
	int sum = 0,
		min = 0,
		max = 0,
		begin = 0,
		end = 0,
		i = 0;
	while (i < N)
	{
		if (arr[i] < min)
		{
			min = arr[i];
			begin = i;
		}
		if (arr[i] > max)
		{
			max = arr[i];
			end = i;
		}
		i++;
	}
	if (begin < end)
	{
		for (i = begin + 1; i < end; i++)
			sum = sum + arr[i];
	}
	else if (begin > end)
	{
		for (i = end + 1; i < begin; i++)
			sum = sum + arr[i];
	}
	else
		sum = arr[end];
	return sum;
}