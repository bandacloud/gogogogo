#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	system("color 70");
	cout.setf(ios::showpoint);
	cout.setf(ios::fixed);
	cout.precision(1);
	double a,b,c,x1,x2,r1,r2,d,alpha,beta;
	cout<<"Quadratic Equations\n";
	cout<<"==================\n\n";
	
	cout<<"imput 'a':";
	cin>>a;	
	cout<<"imput 'b':";
	cin>>b;
	cout<<"imput 'c':";
	cin>>c;
	d=pow(b,2)-4*a*c;
	x1=((-b)+sqrt(d))/2*a;
	x2=((-b)-sqrt(d))/2*a;
	alpha=-b/(2*a);
	beta=sqrt(-d)/(2*a);
	if(!(d<0))
	{
		cout<<"Therefore x="<<x1<<" or x="<<x2<<endl;	
	}
	else
	{
		if(beta<0)
		{
			cout<<"x="<<alpha<<beta<<"i or x="<<alpha<<"+"<<(-beta)<<"i"<<endl;	
		}
		else
		{
			cout<<"x="<<alpha<<"+"<<beta<<"i or x="<<alpha<<"-"<<(beta)<<"i"<<endl;	
		}
	}	
}
