//function to check whether the 2nd parameter is included in 1st parameter

bool contains(char *str, char ch)
{
	for(;*str;str++)
	{
		if(*str==ch)
			return  true;
	}
	return false;
}		

