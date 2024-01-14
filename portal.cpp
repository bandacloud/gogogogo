#include<iostream>
#include<fstream>
#include<cmath>
using namespace std;
int calculator(int grade)
{
	if(grade>69)
	{
		cout<<"Distinction"<<endl;
	}
	else if(grade>54)
	{
		cout<<"Credit"<<endl;
	}
	else if(grade>39)
	{
		cout<<"Pass"<<endl;
	}
	else if(grade>=0)
	{
		cout<<"Supplimentary Exam"<<endl;
	}
	else
	{
		cout<<"Out of range"<<endl;
	}
	return grade;
}
int main()
{
	ofstream write;
	ifstream read;
	system("color 70");
	int value,option[3]={1,2,3},repeat=3;
	char choice;
	cout<<"MUBAS Portal\nLogin As\n";
	cout<<"1 Registrar\n2 Lecturer\n3 Student\n";
	cin>>value;
	//Registrar
	if(value==option[0])
	{
		string password="mubas1",enter,username,pincode,space;
		while(repeat>=0)
		{
			cout<<"Please reply with your password:";
			cin>>enter;
			
			if(password==enter)	
			{
				break;
			}
			else
			{
				cout<<"\aWrong password["<<repeat<<"]"<<endl;
				repeat--;
				if(repeat==0)
				{
					cout<<"\nMaximum trials reached"<<endl;
					return 0;
				}
			}
		}
		cout<<"\n1 Register Students\n2 View Registered Students\n";
		cin>>value;	
		switch(value)
		{
			case 1:
				write.open("login.txt",ios::app);
				if(write.is_open())
				{
					mwamba:
					cout<<"Enter username:";
					cin>>username;
					cout<<"Enter Pin:";
					cin>>pincode;
					if(write<<username<<" "<<pincode<<endl)
					{
						cout<<"Student Successfully Registered"<<endl;
						apo:
						cout<<"\nDo you want to continue(Y/N):";
						 cin>>choice;
						 
						 if(choice=='Y' || choice=='y')
						 {
						 	goto mwamba;
						 }
						 else if(choice=='N' || 'n')
						 {
						 	cout<<"Good bye"<<endl;
						 	return 1;
						 }
						 else
						 {
						  goto apo;	
						 }		 
					}
					else
					{
						cout<<"Failed to register"<<endl;
					}
				}
				else
				{
					cout<<"No file found"<<endl;
				}
				break;
			case 2:
				read.open("login.txt");
				if(read.is_open())
				{
					cout<<"\nList of Registered Students\n";
					while(read>>username>>pincode)
					{
						cout<<username<<" "<<pincode<<endl;
					}
				}
				else
				{
					cout<<"No file found"<<endl;
				}
				break;
			default:;
		}		
			
	}// end of registrar
	//Lecturer
	else if(value==option[1])
	{
		string pass="mubas2",value;
		int calc,pra,mat,prog,comm,ele;
		while(repeat>=0)
		{
			cout<<"Please reply with your pin:";
			cin>>value;
			if(value==pass)
			{
				break;
			}
			else
			{
				cout<<"\a\nWrong Password["<<repeat<<"]"<<endl;
				repeat--;
				if(repeat==0)
				{
					cout<<"Maximum trials reached"<<endl;
					return 2;
				}
			}
		}
		ofstream write;
		write.open("grade.txt");
		if(write.is_open())
		{
			up:
			cout<<"\nEnter Calculus Grade:";
			cin>>calc;
			cout<<"Enter Engineering Practice Grade:";
			cin>>pra;
			cout<<"Enter Engineering Materials Grade:";
			cin>>mat;
			cout<<"Enter Computer Programming Grade:";
			cin>>prog;
			cout<<"Enter Communication Grade:";
			cin>>comm;
			cout<<"Enter Electrical Circuit Grade:";
			cin>>ele;
			
			if(write<<calc<<" "<<pra<<" "<<mat<<" "<<prog<<" "<<comm<<" "<<ele<<endl)
			{
				cout<<"\nGrades Successfully Sent to the student"<<endl;
				haha:
				cout<<"\nDo you want to continue(Y/N):";
				cin>>choice;
				 
				 if(choice=='Y' || choice=='y')
				 {
				 	goto up;
				 }
				 else if(choice=='N' || 'n')
				 {
				 	cout<<"Good bye"<<endl;
				 	return 3;
				 }
				 else
				 {
				  goto haha;	
				 }
			}
		}
		else
		{
			cout<<"Grade.txt not found"<<endl;
		}
	}// end of lecturer
	//student
	else if(value==option[2])
	{
		string username,user,password,pass;
		while(repeat>=0)
		{
			ifstream write;
			read.open("login.txt");
			if(read.is_open())
			{
				
				cout<<"Enter Username:";
				cin>>user;
				cout<<"Please reply with your password:";
				cin>>pass;
				read>>username>>password;	
					if(user==username && pass==password)
					{
						break;	
					}
					else
					{
						cout<<"\aIncorrect Password["<<repeat<<"]"<<endl;
						repeat--;
						if(repeat==0)
						{
							cout<<"Maximum trials reached"<<endl;
							return 4;
						}
					}	
			}
			else
			{
				cout<<"No file found"<<endl;
			}
		}
		ifstream read;
		read.open("grade.txt");
		if(read.is_open())
		{
			int calc,pra,mat,prog,comm,ele;
			read>>calc>>pra>>mat>>prog>>comm>>ele;
			system("cls");
			cout<<"The following are your grades\n\n";
			cout<<"Calculus"<<endl;
			cout<<calculator(calc)<<endl;
			cout<<"\n";
			cout<<"Engineering Practice"<<endl;
			cout<<calculator(pra)<<endl;
			cout<<"\n";
			cout<<"Engineering Materials"<<endl;
			cout<<calculator(mat)<<endl;
			cout<<"\n";
			cout<<"Computer Programming"<<endl;
			cout<<calculator(prog)<<endl;
			cout<<"\n";
			cout<<"Communication"<<endl;
			cout<<calculator(comm)<<endl;
			cout<<"\n";
			cout<<"Electrical Circuits"<<endl;
			cout<<calculator(ele)<<endl;
		}
		else
		{
			cout<<"No file found"<<endl;
		}
	}
	system("pause");
}
