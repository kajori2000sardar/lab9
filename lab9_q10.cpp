//function to reverse and print an array of string

void revString(char* ptr)
{
	char *ptr1, *ptr2;
	ptr1 = ptr;
	ptr2 = ptr + strlen(ptr)-1;
	for(;ptr1<ptr2;ptr1++,ptr2--)
	{
		char temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;
	}
	ptr2-=(strlen(ptr)/2);
	cout<<ptr2<<endl;
}

