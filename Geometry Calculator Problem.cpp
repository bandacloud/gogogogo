#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
	const double PI=3.14159; //making PI constant
	double area,radius,width,length,base,height;
	int choice;
	string shape;
	
	up: //declaring a label for jump statements
	system("cls"); //clearing the screen 
	cout<<"Geometry Calculator\n";
	cout<<"1. Calculate the Area of a circle\n"
		<<"2. Calculate the Area of a Rectangle\n"
		<<"3. Calculate the Area of a Triangle\n"
		<<"4.Quit\n"
		<<"Enter your choice (1-4):";
		
	cin>>choice;
	
	switch(choice)
	{
		case 1:
		
			do{
				cout<<"\nEnter value of Radius:";
				cin>>radius;
				
				area=PI*pow(radius,2); //pow() is a fn where 1st parameter is the base and 2nd parameter is the index/power
				shape="Circle";
			 }while(radius<0);
			break;
			
		case 2:
					
			do{
				cout<<"\nEnter value of Width:";
				cin>>width;
				
				cout<<"Enter value of Length:";
				cin>>length;
				
				area=width * length;
				shape="Rectangle";
			}while(width<0 || length<0);
			break;
			
		case 3:

			do{
				cout<<"\nEnter value of the base:";
				cin>>base;
				
				cout<<"Enter value of the height:";
				cin>>height;
				
				area=0.5*base*height;
				shape="Triangle";
			 }while(base<0 || height<0);
			break;
		case 4:
			cout<<"\nExiting...."<<endl;
			return 1; //quiting the program
			break;
		default:
			cout<<"\a\nChoose between 1-4"<<endl;
			goto up; //jumping the code upwards
	}
	
	cout<<"\nArea of a "<<shape<<" is "<<area;
	cin.get();
	return 0;
}
