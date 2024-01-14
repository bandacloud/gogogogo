#include<iostream>
#include<fstream>
#include<iomanip>
#include<cmath>
using namespace std;
struct studentType
{
	string name;
	int grades[6];
};
void getStudentInfo(studentType&);
void printStudentInfo(studentType);
int main()
{
	int option[2]={1,2},value;
	up:
	cout<<"Choose Between 1 & 2\n";
	cout<<"1)Input Student Info\n2)Print Student Info\n";
	cout<<":";
	cin>>value;
	
	if(value==option[0])
	{
		studentType student1;
		getStudentInfo(student1);
	}
	else if(value==option[1])
	{
		system("cls");
		studentType student1;
		printStudentInfo(student1);
	}
	else
	{
		goto up;
	}
}
void getStudentInfo(studentType& student)
{
	ofstream write;
	write.open("student.txt",ios::app);
	if(write.is_open())
	{
		cout<<"Enter Your Name:";
		cin>>student.name;
		write<<student.name<<" ";
		for(int i=0;i<6;i++)
		{
			cout<<"Enter Grade No "<<i+1<<":";
			cin>>student.grades[i];
			write<<student.grades[i]<<" ";
			if(i==5)
			{
				write<<"\n";
			}
		}
		cout<<"\nStudent Info Successfully Saved"<<endl;
		write.close();
	}
	else
	{
		cout<<"No file found"<<endl;
	}
}
void printStudentInfo(studentType student)
{
	ifstream read;
	read.open("student.txt");
	if(read.is_open())
	{
		cout<<left<<setw(10)<<"NAME"<<setw(5)<<"C1"<<setw(5)<<"C2"<<setw(5)<<"C3"<<setw(5)<<"C4"<<setw(5)<<"C5"<<setw(5)<<"C6"<<setw(5)<<"AVG"<<setw(5)<<endl;
		
		while(read>>student.name>>student.grades[0]>>student.grades[1]>>student.grades[2]>>student.grades[3]>>student.grades[4]>>student.grades[5] )
		{
			int sum=0;
			double average;
			for(int x=0;x<6;x++)
			{
				sum+=student.grades[x];
			}
			average=sum/6.0;
			cout<<endl;
			cout<<left<<setw(10)<<student.name;
			for(int a=0;a<6;a++)
			{
				cout<<setw(5)<<student.grades[a];
			}
			cout<<round(average)<<endl;
		}
		
	}
	else
	{
		cout<<"No File Found"<<endl;
	}
	read.close();
}
