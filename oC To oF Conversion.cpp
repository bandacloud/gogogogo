#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
double getAverage(void);
void printResult(double);
int main()
{
	double averageGrade;
	cout<<showpoint<<fixed<<setprecision(2);
	averageGrade=getAverage();
	printResult(averageGrade);
	system("pause");
	return 0;
}
double getAverage(void)
{
	int sum=0,grade;
	double average;
	for(int i=0;i<6;i++)
	{
		cout<<"Enter grade no "<<i+1<<":";
		cin>>grade;
		while(grade<0 || grade>100)
		{
			cout<<"\aInvalid Grade! Grade must be between 0 and 100"<<endl;
			cout<<"Enter grade no "<<i+1<<":";
			cin>>grade;
		}
		sum+=grade;
	}
	average=sum/6.0;
	return average;
}
void printResult(double average)
{
	string message;
	cout<<"Your average is "<<average<<endl;
	if(average>=50)
	{
		message="You Passed!";
	}
	else
	{
		message="You Failed!";
	}
	cout<<"\n"<<message<<endl;
}

