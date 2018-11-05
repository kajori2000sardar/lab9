//include library
#include<iostream>
#include<cstring>

using namespace std;

//create main
int main()
{
	//declaration of variables
	char str[20],*ptr;

	//ask for input
	cout<<"Enter 10 characcters : "<<endl;

	//take input
	cin>>str;

	int l=strlen(str)-1;

	//pointer refers to the string
	ptr=&str[l];

	//create loop
	for(int i=l;i>=0;i--)
	{
		//print by shifting one element
		cout<<ptr--<<endl;
	}

	//terminating the prograam
	return 0;
}
