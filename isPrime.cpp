#include<iostream>
#include<iomanip>
using namespace std;
bool isPrime(int);
int main()
{
	int numb;
	cout<<"Enter a number from 0-1000:";
	cin>>numb;
	for(int i=2;i<numb;i++)
	{
		if(isPrime(i))
		{
			cout<<i<<setw(3);
		}
	}
	return 0;
}
bool isPrime(int num)
{
	bool flag=true;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			flag=false;
			break;
		}
		
	}
	return flag;
}
