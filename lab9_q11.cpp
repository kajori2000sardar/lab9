#include<iostream>

using namespace std;

int main()
{
	//declaration of variables
	int a;
	double d;
	float f;
	bool b;
	char ch;

	//declaration of pointers
	int *p;
	double *q;
	float *r;
	bool *s;
	char *t;

	//printing size of variables
	cout<<"Size of the integer "<<sizeof(a)<<endl;
	cout<<"Size of float is "<<sizeof(f)<<endl;
	cout<<"Size of double is "<<sizeof(d)<<endl;
	cout<<"Size of boolean is "<<sizeof(b)<<endl;
	cout<<"Size of character is "<<sizeof(ch)<<endl;

	//printing size of pointers
	cout<<"Size of pointer of integer is "<<sizeof(p)<<endl;
	cout<<"Size of pointer of float is "<<sizeof(r)<<endl;
	cout<<"Size of pointer of double is "<<sizeof(d)<<endl;
	cout<<"Size of pointer of boolean is "<<sizeof(b)<<endl;
	cout<<"Size of pointer of character is "<<sizeof(ch)<<endl;

	//terminating the program
	return 0;
} 


