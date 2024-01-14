#include<iostream>
#include<fstream>
using namespace std;

class bank
{
public:
int chance=3,option[4]={1,2,3,4},num1[2]={1,2};
int choose,pin,mob,money=0,taken,amount,database;
char quit;
int balance() 
{
return(money-taken);
}

private:
protected:
};

class customer:public bank
{
public:

int enter,code[3];
string fname[3],lname[3],problem,name,account="02760001";
int transaction;
int num[4]={1,2,3,4};

private:
protected:
};

class teller:public bank
{
public:
int teller[2]={1356,7886};
int insert[4]={1,2,3,4},num4;;
string confirm;
private:
protected:
};

class registrar:public bank
{
	public:
		string passcode;
int access;
int option1[3]={1,2,3};

	private:
	protected:
};

class manager:public bank
{
public:
	string pro;
	int manager,pass=8970;
	int value;
	int num2,num3;
	
string feed_back;
private:
protected:
};

int main()
{
system("color 71");

bank ban;
customer cus;
teller tell;
registrar reg;
manager man;



cout<<"\nWelcome To National Bank Of Malawi\n\n";

r:
cout<<"Please Login as\n\n";
cout<<"1)Customer\n2)Teller\n3)Registrar\n4)Manager"<<endl;
cout<<":";
cin>>ban.choose;

//Customer
if(ban.choose==ban.option[0])
{
cout<<"\n\nCustomer Login Interphase"<<endl;


	cout<<"\n\nPlease choose database"<<endl;
	cout<<"\n1)database 1\n2)database 2\n3)database 3"<<endl;
	cout<<":";
	cin>>cus.database;
	
	if(cus.database==reg.option1[0])
	
	{
		
		while(cus.chance>0)
{
cout<<"\nEnter Your User Name:";
cin>>cus.name;

cout<<"\n\nPlease reply with your pin:";
cin>>cus.pin;

ifstream read;
read.open("login.txt");
if(read.is_open())
{
read>>cus.fname[0];
read>>cus.code[0];
	
if(cus.name==cus.fname[0])
{
	
if(cus.pin==cus.code[0])

{
goto transaction;
}
}//closing matching brace

else
{
cout<<"\a";
cout<<"\n\nWrong Pin"<<"["<<cus.chance<<"]"<<endl;
cus.chance--;

if(cus.chance==0)
{
cout<<"\n\nMaximum trials reached";
return 3;
}
}//closing else brace

read.close();
}//closing if read.is open

else
{
cout<<"\n\nFile not found";
}//closing else if read! open

}//closing while brace
		
	}//closing database 1 brace
	
//////////////////////////////////////////////////////////////////////////////////////////////


if(cus.database==reg.option1[1])
	
	{
		
		while(cus.chance>0)
{
cout<<"\nEnter Your User Name:";
cin>>cus.name;

cout<<"\n\nPlease reply with your pin:";
cin>>cus.pin;

ifstream read;
read.open("log.txt");
if(read.is_open())
{
read>>cus.fname[1];
read>>cus.code[1];
	
if(cus.name==cus.fname[1])
{
	
if(cus.pin==cus.code[1])

{
goto transaction;
}
}//closing matching brace
else
{
cout<<"\a";
cout<<"\n\nWrong Pin"<<"["<<cus.chance<<"]"<<endl;
cus.chance--;

if(cus.chance==0)
{
cout<<"\n\nMaximum trials reached";
return 3;
}
}//closing else brace

read.close();
}//closing if read.is open

else
{
cout<<"\n\nFile not found";
}//closing else if read! open

}//closing while brace
		
	}//closing database 1 brace


//////////////////////////////////////////////////////////////////////////////////////////////

if(cus.database==reg.option1[2])
	
	{
		
		while(cus.chance>0)
{
cout<<"\nEnter Your User Name:";
cin>>cus.name;

cout<<"\n\nPlease reply with your pin:";
cin>>cus.pin;

ifstream read;
read.open("logo.txt");
if(read.is_open())
{
read>>cus.fname[2];
read>>cus.code[2];
	
if(cus.name==cus.fname[2])
{
	
if(cus.pin==cus.code[2])

{
goto transaction;
}
}//closing matching brace
else
{
cout<<"\a";
cout<<"\n\nWrong Pin"<<"["<<cus.chance<<"]"<<endl;
cus.chance--;

if(cus.chance==0)
{
cout<<"\n\nMaximum trials reached";
return 3;
}
}//closing else brace

read.close();
}//closing if read.is open

else
{
cout<<"\n\nFile not found";
}//closing else if read! open

}//closing while brace
		
	}//closing database 1 brace



/////////////////////////////////////////////////////////////////////////////////////////////
transaction:
cout<<"\n\nPlease Choose Your Transaction"<<endl;
cout<<":";

cout<<"\n\n1)Balance Inquary\n2)Top up\n3)Report a Problem\n4)feed back"<<endl;
cin>>cus.transaction;

if(cus.num[0]==cus.transaction)
{


//reading balance.txt from a file
ifstream read;
read.open("balance.txt");
if(read.is_open())
{
	read>>ban.money;


cout<<"\n\nYour current balance is "<<(cus.balance()+ban.money)<<endl;
}

cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto transaction;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;

}

}//closing if num[5] brace

else if(cus.transaction==cus.num[1])
{
cout<<"\n\nEnter your mobile number:";
cin>>cus.mob;
cout<<"Enter amount of airtime:";
cin>>cus.taken;

ifstream read;
read.open("balance.txt");

	if(read.is_open())
	{
		read>>ban.money;
		ban.money-=cus.taken;
		
				
		cout<<"\n\nAmount left "<<ban.money<<" kwacha"<<endl;
		read.close();
	}
	
	
//writing the money and mobile number//	
ofstream write;
write.open("balance.txt",ios::trunc);
if(write.is_open())
{
	write<<ban.money;
	write.close();
}

ofstream file;
file.open("res.txt",ios::trunc);
if(file.is_open())
{
	write<<cus.mob<<endl;
	write<<cus.taken<<endl;
	write.close();
}
E:
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto transaction;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto E;
}

//writing balance() to a file
ofstream data;
data.open("balance.txt",ios::trunc);
if(data.is_open())
{
data<<cus.taken<<endl;
data<<cus.mob<<endl;

cout<<"\n\nDetails sent for confirmation";
data.close();
}
else
{
cout<<"\n\nfile not found"<<endl;
}

}

else if(cus.transaction==cus.num[2])
{
cout<<"\n\nPlease Specify Your Problem"<<endl;
cout<<":";
getline(cin,cus.problem);

ofstream write;
write.open("problem.txt");

//writing problem.txt file
if(write.is_open())
{
write<<cus.problem;

cout<<"\n\n Your problems has been received"<<endl;
write.close();
}
else
{
cout<<"\n\nFile Not Found"<<endl;
}

cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto transaction;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";
return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}
}
else if(cus.transaction==cus.num[3])
{
cout<<"\n\nWelcome To Feedback center\n\n";

ifstream read;
read.open("confirm.txt");

if(read.is_open())
{
read>>tell.confirm;
cout<<":";
cout<<tell.confirm;
}
else
{
cout<<"No Any confirmation reached yet"<<endl;
}
ifstream welenga;
if(welenga.is_open())
{

welenga.open("feedback.txt");
cout<<"From:Manager"<<endl;
getline(welenga,man.pro);
cout<<man.pro;
welenga.close();
}
}//closing feedback brace
}//closing if option[3] brace;


//Registra
else if(ban.choose==ban.option[2])
{
	cout<<"\n\nWelcome To Bank Registration Centre"<<endl;
	
	registrar:
cout<<"\n\n1)Register Customers\n2)view Holders"<<endl;
cout<<":";
cin>>reg.access;

switch(reg.access)
{
case 1:

while(reg.chance>0)
	{
		cout<<"\nPlease Reply With Your password:";
		cin>>reg.passcode;
		
		if(reg.passcode=="p@55")
		{
		break;	
		}
		else
		{
		    reg.chance--;
			cout<<"\a"<<"\n\nWrong Password"<<"["<<reg.chance<<"]"<<endl;
			
			if(reg.chance==0)
			{
				cout<<"\n\nMaximum Trials Reached"<<endl;
				return 3;
			}
		}
	}//closing while brace

cout<<"\n\nPlease Choose database";
cout<<"\n1)Database 1\n2)Database 2\n3)Database 3"<<endl;
cout<<":";
cin>>reg.database;

if(reg.option1[0]==reg.database)
{
	up:
	cout<<"\n\nEnter Your first Name:";
cin>>cus.fname[0];

cout<<"Enter Your Last Name:";
cin>>cus.lname[0];

cout<<"Create Your 4 digit code:";
cin>>cus.code[0];

ofstream write;
write.open("login.txt",ios::ate|ios::app);

if(write.is_open())
{
	
write<<cus.fname[0]<<endl;
write<<cus.code[0]<<endl;
write<<cus.lname[0]<<endl;


cout<<"\nAccount Successfuly Created";
write.close();

}

else
{
cout<<"\n\nFile Not Found";
}

repeat:
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>reg.quit;

if(reg.quit=='Y'||reg.quit=='y')
{
 goto registrar;
}
else if(reg.quit=='N'||reg.quit=='n')
{
cout<<"\n\nDetails Successfully Saved";
return 4;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
	goto repeat;
}
}//closing if reg.option[0]

else if(reg.option1[1]==reg.database)
{
	
	cout<<"\n\nEnter Your first Name:";
cin>>cus.fname[1];

cout<<"Enter Your Last Name:";
cin>>cus.lname[1];

cout<<"Create Your 4 digit code:";
cin>>cus.code[1];

ofstream writ;
writ.open("log.txt",ios::ate|ios::app);

if(writ.is_open())
{
writ<<cus.fname[1]<<endl;	
writ<<cus.code[1]<<endl;
writ<<cus.lname[1]<<endl;
cout<<"\nAccount Successfuly Created";
writ.close();
}
else
{
cout<<"\n\nFile Not Found";
}

pachanya:
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>reg.quit;

if(reg.quit=='Y'||reg.quit=='y')
{
goto up;
}
else if(reg.quit=='N'||reg.quit=='n')
{
cout<<"\n\nDetails Successfully Saved";

return 4;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
	goto pachanya;
}
}//closing else if reg.option[1]

else if(reg.option1[2]==reg.database)
{
	
	cout<<"\n\nEnter Your first Name:";
cin>>cus.fname[2];

cout<<"Enter Your Last Name:";
cin>>cus.lname[2];

cout<<"Create Your 4 digit code:";
cin>>cus.code[2];

ofstream owrite;
owrite.open("logo.txt",ios::ate|ios::app);

if(owrite.is_open())
{
owrite<<cus.fname[2]<<endl;	
owrite<<cus.code[2]<<endl;
owrite<<cus.lname[2]<<endl;
cout<<"\nAccount Successfuly Created";

owrite.close();
}
else
{
cout<<"\n\nFile Not Found";
}

mwamba:
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>reg.quit;

if(reg.quit=='Y'||reg.quit=='y')
{
goto registrar;
}
else if(reg.quit=='N'||reg.quit=='n')
{
cout<<"\n\nDetails Successfully Saved";

return 1;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
	goto mwamba;
}

}//closing final else if reg.option[3]

case 2:
while(reg.chance>0)
	{
		cout<<"\nPlease Reply With Your password:";
		cin>>reg.passcode;
		
		if(reg.passcode=="p@55")
		{
		break;	
		}
		else
		{
		    reg.chance--;
			cout<<"\a"<<"\n\nWrong Password"<<"["<<reg.chance<<"]"<<endl;
			
			if(reg.chance==0)
			{
				cout<<"\n\nMaximum Trials Reached"<<endl;
				return 3;
			}
		}
	}//closing while brace
cout<<"\n\nBelow Are The Names Of Holders";
cout<<"\n";



ifstream read;
read.open("login.txt");
if(read.is_open())
{
read>>cus.fname[0];
read>>cus.lname[0];

cout<<"_______________________________\n\n";

cout<<cus.fname[0]<<" "<<cus.lname[0]<<endl;


read.close();
}
else
{
cout<<"\n\nfile not found"<<endl;
}

ifstream opener;
opener.open("log.txt");
if(opener.is_open())
{
opener>>cus.fname[1];
opener>>cus.lname[1];

cout<<cus.fname[1]<<" "<<cus.lname[1]<<endl;
opener.close();
}
else
{
cout<<"\n\nfile not found"<<endl;
}

ifstream wrote;
wrote.open("logo.txt");
if(wrote.is_open())
{
wrote>>cus.fname[2];
wrote>>cus.lname[2];

cout<<cus.fname[2]<<" "<<cus.lname[2]<<endl;
wrote.close();

}
else
{
cout<<"\n\nfile not found"<<endl;
}

cout<<"_______________________________\n\n";

cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto registrar;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}

}//closing  switch brace
	
}//closing else if opt,choo brace

//TELLER
if(ban.choose==ban.option[1])
{
cout<<"\n\nWelcome To the teller interphase";
while(tell.chance>0)
{
cout<<"\n\nPlease reply with your pin";
cout<<":";
cin>>tell.pin;

if(tell.pin==tell.teller[0])
{
break;
}
else if(tell.pin==tell.teller[1])
{
break;
}
else
{
cout<<"\a"<<"\n\nWrong Pin !!"<<"["<<tell.chance<<"]"<<endl;

tell.chance--;

if(tell.chance==0)
{
cout<<"\n\nMaximum trials reached";
return 4;
}
}

}//closing while brace
now:
teller:	
cout<<"\n\nPlease Choose Your Destiny";
cout<<"\n\n1)Salary\n2)Customer Confirmation\n3)Gaze Customer transactions\n4)Cash Deposit"<<endl;

cout<<":";
cin>>tell.choose;

if(tell.choose==tell.insert[0])
{
cout<<"\n\nPlease enter your pin once again:";
cin>>tell.num4;

if(tell.num4==tell.teller[0])
{
	ifstream read;
	read.open("cash.txt");
	
	if(read.is_open())
	{
	read>>man.num2;
	cout<<"\nYour  salary is "<<man.num2<<" Kwacha"<<endl;	
	}
}//closing teller1 pin brace

else if(tell.num4==tell.teller[1])
{
	ifstream read;
	read.open("cash.txt");
	
	if(read.is_open())
	{
	read>>man.num3;
	cout<<"\nYour  salary is "<<man.num3<<" kwacha"<<endl;
	read.close();
    }
}//closing teller2 brace
}//closing salary brace
else if(tell.choose==tell.insert[2])
{
cout<<"\n\nThe following transactions have been made by a holder:\n\n"<<endl;

ifstream read;
read.open("res.txt");
if(read.is_open())
{
read>>cus.mob;
read>>cus.taken;

cout<<cus.taken<<" kwacha and has been sent to: +265"<<cus.mob<<endl;
read.close();
}
else
{
cout<<"\n\nFile not found";
}


cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto teller;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}

}

else if(tell.choose==tell.insert[1])
{
cout<<"\n\nWrite the confirmation here";
cout<<":";
cin>>tell.confirm;

ofstream write;
write.open("confirm.txt",ios::trunc);

if(write.is_open())
{
write<<tell.confirm;
cout<<"\n\nConfirmation successfuly sent to customer"<<endl;

write.close();
}
else
{
cout<<"file not found"<<endl;
}

cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto transaction;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}


}//closing tell.insert brace

else if(tell.choose==tell.insert[3])//deposit centre
{
	cout<<"\n\nWelcome The Depositing center"<<endl;
	cout<<"\nEnter the amount of money to transfer:";
	cin>>cus.amount;
	
	ifstream read;
	read.open("balance.txt");
	if(read.is_open())
	{
	read>>ban.money;	
	
	ban.money+=cus.amount;
	cout<<"\n\n"<<cus.amount<<" sent to "<<cus.account<<" and current balance is: "<<ban.money;
	read.close();
	}
	ofstream write;
	write.open("balance.txt",ios::trunc);
	if(write.is_open())
	{
		write<<ban.money<<endl;
		write.close();
	}
	else
	{
		cout<<"\n\nFile not found"<<endl;
	}
	
	
	cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto teller;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}

}//closing deposit brace

else
{
cout<<"\a"<<"\n\nOpps Wrong number"<<endl;
goto now;

}//closing else statements brace

}//closing if ban.pin==ban.opt[1]

//MANAGER
else if(ban.choose==ban.option[3])
{
	
	cout<<"\n\nManager Mode Not Activated";
	while(man.chance>0)
	{
		cout<<"\n\nPlease Reply with your pin:";
		cin>>man.manager;
		
		if(man.manager==man.pass)
		{
			break;
		}
		else
		{
			cout<<"\a"<<"\n\nWrong pin"<<"["<<man.chance<<"]"<<endl;
			man.chance--;
			
			if(man.chance==0)
			{
				cout<<"\n\nMaximum Trials Reached"<<endl;
				return 5;
			}
	    }
				
	}//closing while closing brace
	cout<<"\n\nManager Mode Activated"<<endl;
	
	manager:
	cout<<"\n\nPlease Choose Your Transactions";
	cout<<"\n\n1)See Customer problems\n2)Customer Response\n3)Send Monthly salary"<<endl;
	cout<<":";
	cin>>man.choose;
	
	if(man.choose==man.option[0])
	{
		cout<<"\n\nBelow are the problems given by customers:";
		
		ifstream read;
		read.open("problem.txt");
		if(read.is_open())
		{
			read>>cus.problem;
			cout<<cus.problem;
			read.close();
		}
		else
		{
			cout<<"\n\nFile not found"<<endl;
		}
	}//closing customer feed back brace
	
	else if(man.choose==man.option[1])
	{
		cout<<"\n\nRespond to the customers problems >>>";
		getline(cin,man.pro);
		
		ofstream write;
		write.open("feedback.txt",ios::trunc);
		
		if(write.is_open())
		{
			write<<man.pro;
			cout<<"\n\nDetails successfuly sent to the cutomer"<<endl;
			write.close();
		}
		else
		{
			cout<<"file not found"<<endl;
		}
		
		
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto manager;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto pardon;
}

	}//closing customer response brace
	
	else if(man.choose==man.option[2])
	{
		cout<<"\nChoose place to send to"<<endl;
		cout<<"\n)Teller 1\n2)Teller 2"<<endl;
		cout<<":";
		cin>>man.value;
		
		if(man.value==man.num1[0])
		{
			cout<<"\nIndicate amount of cash:";
			cin>>man.num2;
			
			ofstream write;
			write.open("cash.txt",ios::trunc);
			if(write.is_open())
			{
			write<<man.num2<<endl;
			
			cout<<"\n\nCash successfully sent to teller 1"<<endl;
			write.close();
			}
		}
		else if(man.value==man.num1[1])
		{
			cout<<"\nIndicate amount of cash:";
			cin>>man.num3;
			
			ofstream write;
			write.open("cash.txt",ios::trunc);
			if(write.is_open())
			{
			write<<man.num3<<endl;
			
			cout<<"\n\nCash successfully sent to teller 2"<<endl;
			write.close();
		   }
		}
	    
	else
	{
		cout<<"\a"<<"\nOops you entered a wrong number"<<endl;
		goto manager;
	}
       
	   }//closing teller salary brace
else
{
	cout<<"\n\nYou entered a wrong option"<<endl;
	goto r;
}

pardon:
cout<<"\n\nDo you want to continue(y/n)"<<endl;
cout<<":";
cin>>cus.quit;

if(cus.quit=='Y'||cus.quit=='y')
{
goto manager;
}
else if(cus.quit=='N'||cus.quit=='n')
{
cout<<"\n\nThanks For Using Our Bank ";

return 3;
}
else
{
	cout<<"\n\nYou Entered a Wrong Option"<<endl;
goto manager;
}
}//closing manager brace

cin.get();
return 0;
}//closing main brace
