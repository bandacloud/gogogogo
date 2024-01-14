#include<iostream>
using namespace std;
int main()
{
	int pin=2000,pincode,repeat=3;
	string trial;
	cout<<"Login system\n"
		<<"=============\n\n";
	while(repeat>=0)
	{
		cout<<"Please Reply with your pin:";
		cin>>pincode;
		
		if(pincode==pin)
		{
			break;	
		}
		else
		{
			if(repeat>2)
			{
				trial="Trials";
			}
			else
			{
				trial="Trial";
			}
			
			system("cls");
			repeat--;
			if(repeat==0)
			{
				cout<<"Maximum Trials Reached"<<endl;
				return 0;
			}
			cout<<"\aWrong  Pin! ["<<repeat<<" "<<trial<<" remaining]"<<endl;
		}
	}
	cout<<"\n***Welcome Admin***"<<endl;
	cin.get();
	return 0;
}
