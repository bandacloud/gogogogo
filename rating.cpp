#include<iostream>
using namespace std;
int main()
{
	int hrs,overtime;
	double rate,salary;
	const int hrsperwk=40;
	
	cout<<"Input number of hours worked:";
	cin>>hrs;
	cout<<"Enter rate/hr:";
	cin>>rate;
	
	overtime=hrs-hrsperwk;
	if(overtime>0)
	{
		salary=(hrsperwk*rate)+(1.5*overtime*rate);
		cout<<"Your amount is mk "<<salary<<endl;
	}
	else
	{
		salary=hrs*rate;
		cout<<"Your amount is mk "<<salary<<endl;
	}
	return 0;
}
