#include<iostream>
using namespace std;
int main()
{
int ncompare,value,max=0,min=0,realMin=0;
char choice;
system("color 70");

cout<<"Program to find Min and Max number\n\n";
here:
cout<<"Enter how many numbers to compare:";
cin>>ncompare;
pachanya:
cout<<"Do you want to enter "<<ncompare<<" numbers? (Y or N):";
cin>>choice;
if(choice=='Y' || choice=='y')
{
	for(int count=1;count<=ncompare;count++)
	{
		cout<<"Enter integer No "<<count<<":";
		cin>>value;
	
		max=(value>max)?value:max; //using conditional operator as an if statement for max
		min=(value<min)?value:min; //using conditional operator as an if statement for min
	}
	cout <<"The max value is "<<max<<endl;
	cout <<"The min value is "<<min<<endl;
		
}
else if(choice=='N' || choice=='n')
{
 goto here;	
}
else
{
goto pachanya;	
}



return 0;
cin.get();
}
