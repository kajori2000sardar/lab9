//function to take array and size of array as input and return no. of even no.s in the array

int countEven(int *ptr,int n)
{
	int c=0;
	for(int i=0;i<n;i++)
	{
		if(*ptr%2==0)
		{
			c++;
		}
		ptr++;
	}
	return c;
}

