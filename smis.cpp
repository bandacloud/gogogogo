#include<iostream>
#include<fstream>
using namespace std;

class registrar
{
	public:
		string fname,sname;
		int pin;
	private:
	protected:	
};
class student
{
	public:
		string fname,sname;
		int pin,enter;
	private:
	protected:	
};
int  main()
{
	registrar reg;
	student stud;
	int option[4]={1,2,3,4},value,regpin=2019,repeat=3;
	char choice;
	//login menu
	here:
	cout<<"The Polytechnic\n\n";
	cout<<"Login as:\n1)Student\n2)Lecturer\n3)Registrar\n4)Quit"<<endl;
	cin>>value;
	//running an if statement
	//student
	if(value==option[0])
	{
		ifstream read;
		read.open("register.txt");
		if(read.is_open())
		{
			while(read>>stud.pin)
			{
				cout<<"Please reply with your pin:";
				cin>>stud.enter;
				
				if(stud.enter==stud.pin)
				{
					cout<<"ok"<<endl;
				}
				else
				{
					cout<<"Password Error"<<endl;
				}
			}	
		}
		else
		{
			cout<<"File does not exist"<<endl;
		}
	}
	//lecturer
	else if(value==option[1])
	{
		
	}
	//registrar
	else if(value==option[2])
	{
		//pin rewinding
		while(repeat>=0)
		{
			cout<<"Please reply with your pin:";
			cin>>value;
			
			if(value==regpin)
			{
				break;
			}
			else
			{
				cout<<"\a\nWrong pin["<<repeat<<"]"<<endl;
				repeat--;
				
				if(repeat==0)
				{
					cout<<"\a\nMaximum trials reached"<<endl;
					return 0;
				}
			}		
		}
		int choose[2]={1,2},passcode;
		string fname,sname;
		cout<<"Choose between 1& 2\n\n";
		apa:
		cout<<"1)Register Students\n2)Registered Students"<<endl;
		cin>>value;
		//registering students
		if(value==choose[0])
		{
			ofstream write;
			write.open("register.txt",ios::app);
			if(write.is_open())	
			{
				mwamba:
				cout<<"Enter Student's First name:";
				cin>>fname;
				cout<<"Enter Student's Surname:";
				cin>>sname;
				cout<<"Enter Student's passcode:";
				cin>>passcode;
				
				if(write<<fname<<' '<<sname<<' '<<passcode<<endl)
				{
					cout<<"Student Successfully Registered"<<endl;
					
					//do you want to continue
					doo:
					cout<<"Do you want to continue(Y/N):";
					cin>>choice;
					
					if(choice=='Y' || choice=='y')
					{
						goto mwamba;	
					}
					else if(choice=='N' || choice=='n')
					{
						cout<<"Good bye"<<endl;
						return 0;
					}
					else
					{
						cout<<"\aWrong option"<<endl;
						goto doo;	
					}
				}
				
			}
			else
			{
				cout<<"file does not exist"<<endl;
			}
		}
		
		//viewing registered students
		else if(value==choose[1])
		{
			ifstream read;
			read.open("register.txt");
			if(read.is_open())
			{
				cout<<"First Name"<<"--"<<"Surname"<<"--"<<"Pin"<<endl;
				while(read>>reg.fname>>reg.sname>>reg.pin)
				{
					
					cout<<reg.fname<<"--"<<reg.sname<<"--"<<reg.pin<<endl;
				}
					apo:
					cout<<"Do you want to continue(Y/N):";
					cin>>choice;
					
					if(choice=='Y' || choice=='y')
					{
						goto apa;	
					}
					else if(choice=='N' || choice=='n')
					{
						cout<<"Good bye"<<endl;
						return 0;
					}
					else
					{
						cout<<"\aWrong option"<<endl;
						goto apo;	
					}
			}
			else
			{
				cout<<"File does not exist"<<endl;
			}
				
		}
		else
		{
			goto apa;
		}
		
	}
	else if(value==option[3])
	{
		cout<<"Good bye"<<endl;
		return 2;
	}
	else
	{
		cout<<"\a"<<endl;
		goto here;		
	}
	return 3;
}



