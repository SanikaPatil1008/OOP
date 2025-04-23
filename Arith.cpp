#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	char ch;
	cout<<"Enter number :";
	cin>>a;
	cout<<"Enter the second number :";
	cin>>b;
	cout<<"Arithmetic operations (+,-,*,/):";
	cin>>ch;
	switch(ch)
	{
		case'+':t=a+b;
		cout<<t;
		break;
		case'-':t=a-b;
		cout<<t;
		break;
		case'*':t=a*b;
		cout<<t;
		break;
		case'/':t=a/b;
		cout<<t;
		break;
		default:
			cout<<"Invalid Operater ";
	}
	
}
