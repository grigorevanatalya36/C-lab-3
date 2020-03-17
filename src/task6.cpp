int getSumMaxMin(int arr[],int N)
{
	int max =arr[0];
	int min=arr[0];
	int indmax=0;
	int indmin=0;
	for (int i=0; i<N; i++)
	{
		if(arr[i]>max)
		{
			max=arr[i];
			indmax=i;
		}

		if (arr[i]<min)
		{
			min=arr[i];
			indmin=i;
		}
	}
	int sum =0;

	if (indmin<indmax)
		for (int i=indmin+1; i<indmax; i++)
			sum=sum+arr[i];
	if (indmin>indmax)
		for (int i=indmax+1; i<indmin; i++)
			sum=sum+arr[i];
	

	return sum;
}