#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
	int repeat=3,kubweleza=3,poyintsi=0,points=0,guessed;
	srand(time(0));
	
	cout<<"GUESS NUMBER GAME"<<endl;
	cout<<"\nLevel 1"<<endl;
			
		while(repeat>=0 && points<=49)
		{
		
			int random=rand()%2;
			
			cout<<"Guess any number between 0 to 1:";
			cin>>guessed;
			
			if(guessed==random)
			{
				cout<<"***RIGHT***"<<endl;
				points+=25;
				cout<<points<<" points"<<endl;
				
			}
			else
			{
				cout<<"\aWrong Guess ["<<repeat<<"]"<<endl;
				cout<<"Right answer is "<<random<<endl;
				repeat--;
				if(repeat==0)	
				{
					cout<<"\nMaximum Trials Reached"<<endl;
					
					return 0;
				}
			}
		}
		cout<<"\nLevel 2"<<endl;
		while(kubweleza>=0 && poyintsi<=49)
		{
		
			int random=1+(rand()%5);
			
			cout<<"Guess any number between 1 to 5:";
			cin>>guessed;
			
			if(guessed==random)
			{
				cout<<"***RIGHT***"<<endl;
				points+=25;
				cout<<poyintsi<<" points"<<endl;
				
			}
			else
			{
				cout<<"\aWrong Guess ["<<kubweleza<<"]"<<endl;
				cout<<"Right answer is "<<random<<endl;
				kubweleza--;
				if(kubweleza==0)	
				{
					cout<<"\nGame Over"<<endl;
					
					return 0;
				}
			}
		}
		cout<<"Game Completed"<<endl;
		cout<<"The End"<<endl;
		
	cin.get();
	return 1;
}
