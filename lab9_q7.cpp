//function to take array and it's size as input and return maximum value of the array

double *maximum(double *a,int size)
{
	if(size==0)
	{
		return NULL;
	}
	double m=*a;
	double *mptr=a;
	for(int i=0;i<size;i++)
	{
		if(*++a>m)
		{
			m=*a;
			mptr=a;
		}
		a++;
	}
	return mptr;
}

