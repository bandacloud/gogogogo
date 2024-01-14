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
		char choice;
		string line="---------------------------\n";
		string user[30]; //array to hold usernames from users.dat
		string pass[30]; //array to hold passwords from users.dat
		int size=30; //initial size of all arrays
		string productId,productName,costPrice,sellingPrice; //variables for products.dat
		string userId,surname,firstName,gender,dob,phone,email,address; //variables for ordinary users
		void getData(); //getting data from users.dat
		int search(string [],int ,string ); //searching for username and password in users.dat
		void resume(); 
		
};

class Admin: public Esmas
{
	public:
		int list[10]={1,2,3,4,5,6,7,8,9,10};
		string username,password;
		string id[30],name[30],cost[30],selling[30];
		
		void addUser(); //function to add users to a file
		void addProductDetails(); //function to add product details
		void AddOrdinaryUser(); //function to add ordinary users
		void getProductData(); //function to getProduct data from a products file
		void searchProduct(); //searching product of an item
		void viewProduct(); //viewing list of information from products
		void addCustomers(); //adding customers in customers.dat file
		void exportCsv();
};

class User:public Esmas
{
	public:
		int list[5]={1,2,3,4,5};
		int userPos,passPos;
		string username,password,newPass;
		
		void login();//login
		void changePassword(); //change password	
};


int main()
{
	int option[3]={1,2,3};
	Esmas major;
	Admin admn;
	User usr;
	ofstream write;
	ifstream read;
	
	do
	{
		main: //label for redirections
		system("cls"); //clearing the screen
		cout<<"\t\t\t\t------------------------------";
		cout<<"\n\t\t\t\teShop Management System(eSMaS)\n"; //title of application
		cout<<"\t\t\t\t------------------------------\n\n";
	
		cout<<"Login As\n\n1) Admin\n2) Ordinary User\n3) Quit\n";
		
		cout<<admn.line; //print a line
		cout<<":";
		cin>>major.value;
		
///////////////////////////////////Admin///////////////////////////////////////
		if(option[0]==major.value)
		{
			do
			{
				system("cls");
				cout<<"\n\tADMIN\n";
				cout<<"\t-----";
				
				cout<<"\n1] Add Product"
					<<"\n\n2] Add Ordinary Users"
					<<"\n\n3] Add Customers"
					<<"\n\n4] Edit Product Details"
					<<"\n\n5] Delete Product Record"
					<<"\n\n6] Search a Product"
					<<"\n\n7] View Products"
					<<"\n\n8] Export Products"
					<<"\n\n9] Register Users"
					<<"\n\n10] Main Menu\n"
					<<admn.line;
				cout<<":";
				cin>>admn.value;
				
				if(admn.list[0]==admn.value) //add product details
				{
					admn.addProductDetails();
					admn.resume();
				}
				else if(admn.list[1]==admn.value) //add ordinary users
				{
					admn.AddOrdinaryUser();
					admn.resume();
				}
				else if(admn.list[2]==admn.value) //add customers
				{
					admn.addCustomers();
				}
				else if(admn.list[3]==admn.value) //edit product details
				{
					
				}
				else if(admn.list[4]==admn.value) //delete product detailszd
				{
					
				}
				else if(admn.list[5]==admn.value) //search product
				{
					admn.getProductData();
					admn.searchProduct();
				}
				else if(admn.list[6]==admn.value) //view list of products
				{
					admn.getProductData();
					admn.viewProduct();
				}
				else if(admn.list[7]==admn.value) //export data to csv format
				{
					admn.getProductData();
					admn.exportCsv();
					admn.resume();
					
				}
				else if(admn.list[8]==admn.value) //add login users
				{
					admn.addUser();
					admn.resume();	
				}
				else if(admn.list[9]==admn.value) //main manu
				{
					goto main;
				}
			}while(admn.value<1 || admn.value>9);
				
		}
		
////////////////////////////Ordinary User//////////////////////////////////
		else if(option[1]==major.value)
		{			
			usr.getData(); //calling getData
			usr.login();
			
			system("cls");
			cout<<"\t-----";
			cout<<"\n\tADMIN\n";
			cout<<"\t-----";
			
			cout<<"\n1) View product Details"
				<<"\n2) Record Product Sales"
				<<"\n3) Profit & Loss Report"
				<<"\n4) Change Password"
				<<"\n5) Main Menu\n"
				<<usr.line
				<<":";
				cin>>usr.value;
				
				if(usr.value==usr.list[0]) //View Products
				{
					
				}
				else if(usr.value==usr.list[1]) //Record Products
				{
					
				}
				else if(usr.value==usr.list[2]) //profit & loss generation
				{
					
				}
				else if(usr.value==usr.list[3]) //change password
				{
					usr.changePassword();
					usr.resume();
				}
				else if(usr.value==usr.list[4]) //main menu redirection
				{
					goto main;
				}
		}
		else if(option[2]==major.value)
		{
			system("cls");
			cout<<"\n\n<-------------Good Bye--------------->"<<endl;
			return 0;
		}	
	}while(major.value<1 || major.value>2);//repeat if user writes wrong values

	cin.get();
	return 0;
}
///////////////////////Class Definitions of Esmas/////////////////////////////////
void Esmas::getData()
{
	ifstream read;
	read.open("./data/users.dat");
	if(read.is_open())
	{
		while(!read.eof())
		{
			for(int i=0;i<size;i++)
			{
				read>>user[i]>>pass[i];
			}
		}
		read.close();
	}
	else
	{
		cout<<"users.dat not found"<<endl;
	}
}
int Esmas::search(string list[],int size,string data)
{
	bool found=false;
	int position=-1;
	for(int i=0;i<size;i++)
	{
		if(data==list[i])
		{
			found=true;
			position=i;
		}
	}
	return position;
}
//function to quite
void Esmas::resume()
{
	up: //declaring a label
	cout<<"\nDo you want to continue(Y/N):";
	cin>>choice;
	if(choice=='Y' || choice=='y')
	{
	  	return;
	}
	else if(choice=='N' || choice=='n')
	{
		cout<<"Good Bye"<<endl;	
	}
	else
	{
		cout<<"\aIncorrect Choice\n";
		goto up; //redirection to label up
	} 	
}
///////////////////////Class Definitions of Admin/////////////////////////////////
//function to add ordinary user
void  Admin::addUser()
{
	ofstream write;
	write.open("./data/users.dat",ios::app);
	if(write.is_open())
	{
		cout<<"Enter Username:";
		cin>>username;
		cout<<"Enter Password:";
		cin>>password;
		if(write<<username<<" "<<password<<endl)
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

void Admin::addProductDetails()
{
	system("cls");
	cout<<"\t----------\n";
	cout<<"\tLOGIN AREA\n";
	cout<<"\t----------\n";
	
	ofstream write;
	write.open("./data/products.dat",ios::app);
	if(write.is_open())
	{
		cout<<"Enter Product Id:";
		cin>>productId;
		
		cout<<"Enter Product Name:";
		cin>>productName;
		
		cout<<"Enter Cost Price:";
		cin>>costPrice;
		
		cout<<"Enter Selling Price:";
		cin>>sellingPrice;
		
		if(write<<productId<<" "<<productName<<" "<<costPrice<<" "<<sellingPrice<<endl)
		{
			cout<<"Details Added Successfully"<<endl;
		}
		else
		{
			cout<<"Failed to send information to a file"<<endl;
		}	
		write.close();
	}
	else
	{
		cout<<"products.dat not found"<<endl;
	}
}
void Admin::AddOrdinaryUser()
{
	system("cls");
	cout<<"\t----------\n";
	cout<<"\tLOGIN AREA\n";
	cout<<"\t----------\n";
	
	ofstream write;
	write.open("./data/ordUsers.dat",ios::app);
	if(write.is_open())
	{
		cout<<"Enter User ID:";
		cin>>userId;
		
		cout<<"Enter Surname:";
		cin>>surname;
		
		cout<<"Enter Firstname:";
		cin>>firstName;
		
		cout<<"Enter gender:";
		cin>>gender;
		
		cout<<"Enter Date of Birth:";
		cin>>dob;
		
		cout<<"Enter Phone number:";
		cin>>phone;
		
		cout<<"Enter Address:";
		cin>>address;
		
		if(write<<userId<<" "<<surname<<" "<<firstName<<" "<<gender<<" "<<dob<<" "<<phone<<" "<<address<<endl)
		{
			cout<<"\nuser "<<firstName<<" "<<surname<<" was added successfuly"<<endl;
			resume();
		}
		write.close();
	}
	else
	{
		cout<<"customers.dat not found"<<endl;
	}
}
void Admin::getProductData()
{
	ifstream read;
	read.open("./data/products.dat");
	if(read.is_open())
	{
		while(!read.eof())
		{
			for(int i=0;i<size;i++)	
			{
				read>>id[i]>>name[i]>>cost[i]>>selling[i];
			}	
		}
		read.close();
	}
	else
	{
		cout<<"products.dat not found"<<endl;
	}
}
void Admin::searchProduct()
{
	system("cls");
	cout<<"\n\tADMIN\n";
	cout<<"\t-----\n";
	
	int position;
	here:
	cout<<endl;
	cout<<"Enter Product Id:";
	cin>>productId;
	position=search(id,size,productId);
	if(position!=-1)
	{
		system("cls");
		cout<<endl;
		cout<<"-------------------------------------------------------------------------\n";
		cout<<left<<setw(20)<<"Product ID"<<setw(20)<<"Product Name"<<setw(20)<<"Cost Price"<<setw(20)<<"Selling Price"<<endl;
		cout<<"-------------------------------------------------------------------------\n";
		
		cout<<left<<setw(22)<<id[position]<<setw(22)<<name[position]<<setw(22)<<cost[position]<<setw(22)<<selling[position]<<endl;
		cout<<"-------------------------------------------------------------------------\n";
		
	}
	else
	{
		cout<<productId<<" is not available on eSMas"<<endl;
		goto here;
	}
}
void Admin::viewProduct()
{
	system("cls");
	cout<<"\n\tADMIN\n";
	cout<<"\t-----\n";
	
	system("cls");
	cout<<endl;
	cout<<"-------------------------------------------------------------------------\n";
	cout<<left<<setw(20)<<"Product ID"<<setw(20)<<"Product Name"<<setw(20)<<"Cost Price"<<setw(20)<<"Selling Price"<<endl;
	cout<<"-------------------------------------------------------------------------\n";
		
	for(int i=0;i<30;i++)
	{
		cout<<left<<setw(22)<<id[i]<<setw(22)<<name[i]<<setw(22)<<cost[i]<<setw(22)<<selling[i]<<endl;
		cout<<"-------------------------------------------------------------------------\n";
	}
}
void Admin::addCustomers() //function to add customers
{
	system("cls");
	cout<<"\n\tADMIN\n";
	cout<<"\t-----\n";
	
	ofstream write;
	write.open("./data/customers.dat",ios::app);
	if(write.is_open())
	{
		cout<<"Enter Customer ID:";
		cin>>userId;
		
		cout<<"Enter Surname:";
		cin>>surname;
		
		cout<<"Enter Firstname:";
		cin>>firstName;
		
		cout<<"Enter gender:";
		cin>>gender;
		
		cout<<"Enter Date of Birth:";
		cin>>dob;
		
		cout<<"Enter Phone number:";
		cin>>phone;
		
		cout<<"Enter Email Address:";
		cin>>email;
		
		cout<<"Enter Postal Address:";
		cin>>address;
		
		if(write<<userId<<" "<<surname<<" "<<firstName<<" "<<gender<<" "<<dob<<" "<<phone<<" "<<email<<" "<<address<<endl)
		{
			cout<<"\ncustomer "<<firstName<<" "<<surname<<" was added successfuly"<<endl;
			resume();
		}
		write.close();
	}
	else
	{
		cout<<"customers.dat not found"<<endl;
		
	}
}
void Admin::exportCsv()
{
	system("cls");
	cout<<"\n\tADMIN\n";
	cout<<"\t-----\n";
	
	ofstream write;
	write.open("./data/products.csv",ios::trunc);
	if(write.is_open())
	{
		for(int i=0;i<size;i++)
		{
			write<<id[i]<<" "<<name[i]<<" "<<cost[i]<<" "<<selling[i]<<endl;
		}
		cout<<"Data Exported to csv format"<<endl;
	}
	else
	{
		cout<<"\a\nproducts.csv not found"<<endl;
	}
}
///////////////////////Class Definitions of User/////////////////////////////////
void User::login()
{
	system("cls");
	cout<<"\t----------\n";
	cout<<"\tLOGIN AREA\n";
	cout<<"\t----------\n";
	
	up:
	cout<<"\n";
	cout<<"Enter Your Username:";
	cin>>username;
	cout<<"Enter Your Password:";
	cin>>password;
	
	userPos=search(user,30,username);
	passPos=search(pass,30,password);
				
	if(userPos!=-1)
	{
		if(passPos!=-1)
		{
			return;
		}
		else
		{
			cout<<"\aIncorrect Password"<<endl;
			goto up;
		}
	}
	else
	{
		cout<<"\aIncorrect Username"<<endl;
		goto up;
	}	
}
void User::changePassword()
{
	up:
	cout<<"\n";
	cout<<"Enter Your old Password:";
	cin>>password;
	cout<<"Enter Your New Password:";
	cin>>newPass;
	
	if(passPos=search(pass,30,password)!=-1)
	{
		ofstream write;
		write.open("./data/users.dat",ios::trunc);
		if(write.is_open())
		{
			pass[passPos]=newPass;
			for(int i=0;i<size;i++)
			{
			 	write<<user[i]<<" "<<pass[i]<<endl;
			}
			cout<<"\nPassword Successfully Changed"<<endl;
			write.close();
		}
		else
		{
			cout<<"users.dat not found"<<endl;
		}
	}
	else
	{
		cout<<"\aIncorrect Password"<<endl;
		goto up;
	}		
}
