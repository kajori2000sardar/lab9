//include library
#include<iostream>

using namespace std;

//creating main 
int main()
{
	//declaring variables and pointer
	int a,b,*p;

	//point p to a;
	p=&a;

	//store pointed value of p in b
	b=*p;

	//print a,b and p
	cout<<"a is : "<<a<<endl<<"b is : "<<b<<endl<<"*p is : "<<*p<<endl;

	//assign values in a,b
	a=2;
	b=3;

	//print a,b and *p
	cout<<"Value of a is : "<<a<<endl;
	cout<<"Value of b is : "<<b<<endl;
	cout<<"Value of *p is : "<<*p<<endl;

	//point p to b 
	p=&b;

	//print a,b and *p
	cout<<"Value of a is : "<<a<<endl;
	cout<<"Value of b is : "<<b<<endl;
	cout<<"Value of *p is : "<<*p<<endl;

	//terminating program
	return 0;
}
