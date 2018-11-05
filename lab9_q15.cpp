//include library
#include<iostream>
#include<cstring>

using namespace std;

//create main
int main()
{
	//decclaration of variables
	char str[20],*ptr;

	//ask for input
	cout<<"Enter 10 characcters : "<<endl;

	//take input
	cin>>str;

	//pointer refers to the string
	ptr=&str[0];

	//create loop
	for(int i=0;i<strlen(str);i++)
	{
		//print by shifting one element
		cout<<ptr++<<endl;
	}

	//terminating the prograam
	return 0;
}
