//include library
#include<iostream>
#include<cstring>

using namespace std;

//create main
int main()
{
	//create string
	char str[20];
	char *ptr;
	ptr=&str[0];

	//storing name
	strcpy(str,"Kajori Sardar");

	//printing my name using normal method
	cout<<"Printing the name using normal index method : "<<endl;

	//creating loop 
	for(int i=0;i<strlen(str);i++)
	{
		//print the name
		cout<<str[i];
	}
	cout<<endl;

	//printing my name using pointer method
	cout<<"Printing the name using pointer method : "<<endl;

	//creating loop
	for(int i=0;i<strlen(str);i++)
	{
		//printing  the name
		cout<<*ptr++;
	}
	cout<<endl;

	//terminating the program
	return 0;
}
