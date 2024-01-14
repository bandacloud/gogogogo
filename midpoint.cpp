#include<iostream>
#include<cmath>
#define pi 3.141592654
using namespace std;

//function signatures
float csc(float);
float sec(float);
float cot(float);
float ln(float);

int main()
{	
	//MID POINT APROXIMATION
	system("color 70");
	double a,b,width;
	int n;

	cout<<"Enter value of 'a':"; //minimum interval
	cin>>a;
	cout<<"Enter value of 'b':"; //maximum interval
	cin>>b;
	cout<<"Enter value of 'n':"; //number of sub-intervals
	cin>>n;
	width=((b-a)/n); //width of each sub-interval

	float coordinates[n+1],x_bar[n]; //array of coordinates

	cout<<"\n"; //newline
	cout<<"| X(i) |";
	for(int y=0;y<=n;y++)
	{
		coordinates[y]=(double)a+(y*width); //formula for calculating values in the coordinates
		cout<<"x("<<y<<")="<<coordinates[y]<<" | ";
	}

	cout<<"\n\n"; //newline
	cout<<"| x¯(i) |";
	for(int x=1;x<=(n);x++)
	{
		x_bar[x]=(coordinates[x-1]+coordinates[x])/2; //calculating the average of each sub-interval
		cout<<"x¯("<<x<<")="<<x_bar[x]<<" | ";
	}
	cout<<"\n";
	cin.get(); 
}

float csc(float value)
{
	float result;
	if(sin(value*(pi/180)))
	{
		result=1/sin(value*(pi/180));
		return result;
	}
	else
	{
		cout<<"infinity"<<endl;	
		return 0;
	}
}
float sec(float value)
{
	float result;
	if(cos(value*(pi/180)))
	{
		result=1/cos(value*(pi/180));
		return result;
	}
	else
	{
		cout<<"infinity"<<endl;	
		return 0;
	}
}
float cot(float value)
{
	float result;
	if(tan(value*(pi/180)))
	{
		result=1/tan(value*(pi/180));
		return result;
	}
	else
	{
		cout<<"infinity"<<endl;	
		return 0;
	}
}
float ln(float value)
{
	float result;
	if(log(value))
	{
		result=log(value);
		return result;
	}
}
