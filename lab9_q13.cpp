//include library
#include<iostream>

using namespace std;

//create main
int main()
{
	//create an array of size 10
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int *i;
	i=&arr[0];

	//printing the values of array using normal index method
	cout<<"Printing array using normal index method : "<<endl;

	//creating for loop
	for(int i=0;i<10;i++)
	{
		//print the value of array
		cout<<arr[i]<<" ";
	}
	cout<<endl;

	//printing the values of array using pointer method
	cout<<"Printing array using pointer method : "<<endl;
	
	//creating loop
	for(int j=0;j<10;j++)
	{
		//print the value of array
		cout<<*i<<" ";
		i++;
	}
	cout<<endl;


	//terminating the program
	return 0;
}
