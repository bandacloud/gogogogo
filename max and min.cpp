#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double num1,num2;
	string symbol;
	
	cout<<"Enter a double value:";
	cin>>num1;
	cout<<"Enter another double value:";
	cin>>num2;
	cout<<"Enter one of the following[*+-/]:";
	cin>>symbol;
	if(symbol=="*")
	{
		cout<<num1<<"*"<<num2<<" is "<<num1*num2<<endl;
	}
	else if(symbol=="+")
	{
		cout<<num1<<"+"<<num2<<" is "<<num1+num2<<endl;
	}
	else if(symbol=="-")
	{
		cout<<num1<<"-"<<num2<<" is "<<num1-num2<<endl;
	}
	else if(symbol=="/")
	{
		cout<<num1<<"/"<<num2<<" is "<<num1/num2<<endl;
	}
	else
	{
		cout<<"\aInvalid symbol"<<endl;
	}
}
