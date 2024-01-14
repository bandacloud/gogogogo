#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;
class Esmas
{
	public:
		int value;
		int option[2]={1,2};
		char choice;
};
class Admin: public Esmas
{
	public:
		int list[10]={1,2,3,4,5,6,7,8,9,10};
		string username,password;		
};

//function to add ordinary user
void  addUser(ofstream& write,Admin admn)
{
	write.open("./data/users.dat",ios::app);
	if(write.is_open())
	{
		cout<<"Enter Username:";
		cin>>admn.username;
		cout<<"Enter Password:";
		cin>>admn.password;
		if(write<<admn.username<<" "<<admn.password<<endl)
		{
			cout<<"Data Added Successfully"<<endl;
		}
		else
		{
			cout<<"Failed to add data to file"<<endl;
		}
	}
	else
	{
		cout<<"users.dat not found"<<endl;
	}
	write.close();
}
//function to quite
void resume(Esmas major)
{
	up: //declaring a label
	cout<<"\nDo you want to continue(Y/N):";
	cin>>major.choice;
	if(major.choice=='Y' || major.choice=='y')
	{
		
	}
	else if(major.choice=='N' || major.choice=='n')
	{
		cout<<"Good Bye"<<endl;	
	}
	else
	{
		cout<<"\aIncorrect Choice\n";
		goto up; //redirection to label up
	} 	
}
int main()
{
	Esmas major;
	Admin admn;
	ofstream write;
	
	do
	{
		system("cls"); //clearing the screen
		cout<<"\n\t\t\t\teShop Management System(eSMaS)\n"; //title of application
		cout<<"\t\t\t\t------------------------------\n\n";
	
		cout<<"Login As\n1)Admin\n2)Ordinary User\n:";
		cin>>major.value;

		if(major.option[0]==major.value) //admin
		{
			do
			{
				system("cls");
				cout<<"\n\tADMIN\n";
				cout<<"\t-----";
				
				cout<<"\n1)Add Product"
					<<"\n2)Add Ordinary Users"
					<<"\n3)Add Customers"
					<<"\n4)Edit Product Details"
					<<"\n5)Delete Product Record"
					<<"\n6)Search a Product"
					<<"\n7)View Products"
					<<"\n8)Export Products"
					<<"\n9)Register Users"
					<<"\n10)Go back\n";
				cout<<":";
				cin>>admn.value;
				if(admn.list[0]==admn.value)
				{
					
				}
				else if(admn.list[1]==admn.value)
				{
					
				}
				else if(admn.list[2]==admn.value)
				{
					
				}
				else if(admn.list[3]==admn.value)
				{
					
				}
				else if(admn.list[4]==admn.value)
				{
					
				}
				else if(admn.list[5]==admn.value)
				{
					
				}
				else if(admn.list[6]==admn.value)
				{
					
				}
				else if(admn.list[7]==admn.value)
				{
					
				}
				else if(admn.list[8]==admn.value)
				{
					addUser(write,admn);
					resume(major);	
				}
				else if(admn.list[9]==admn.value)
				{
					
				}
			}while(admn.value<1 || admn.value>9);
				
		}
		else if(major.option[1]==major.value) //Ordinary User
		{
			cout<<"ok"<<endl;
		}	
	}while(major.value<1 || major.value>2);//repeat if user writes wrong values

	cin.get();
	return 0;
}
