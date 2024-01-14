#include<iostream>
using namespace std;
void sortData(int[],int);
void printData(int[],int);
void getData(int[],int);
int searchData(int[],int,int);
int main()
{
	/*making a binary search of unsorted data*/
	const int SIZE=5;
	int search,result;
	int searchList[SIZE];
	getData(searchList,SIZE);
	system("cls");
	cout<<"Enter a number to search from the list:";
	cin>>search;
	sortData(searchList,SIZE);
	result=searchData(searchList,SIZE,search);
	if(result==-1)
	{
		cout<<search<< " is not available on the search list"<<endl;
	}
	else
	{
		cout<<search<<" is available at position "<<search+1<<endl;
	}
	printData(searchList,SIZE);
	
}
void sortData(int list[],int size)
{
		bool swap;
		int temp;
	do
	{
		swap=false;
		for( int count=0;count<(size-1);count++)
		{
			if(list[count]>list[count+1])
			{
				temp=list[count];
				list[count]=list[count+1];
				list[count+1]=temp;
				swap=true;
			}
		}
	}while(swap);
}
void printData(int list[],int size)
{
	for(int count=0;count<size;count++)
	{
		cout<<list[count]<<" ";
	}
}
int searchData(int list[],int size,int value)
{
	bool found=false;
	int first=0;
	int last=size-1;
	int position=-1;
	int middle;
	while(!found && first<=last)
	{
		middle=(first+last)/2;
		if(list[middle]==list[value])
		{
			position=middle;
		}
		else if(list[middle]>list[value])
		{
			last=middle-1;
		}
		else
		{
			first=middle+1;
		}
	}
	return position;
}
void getData(int list[],int size)
{
	for(int count=0;count<size;count++)
	{
		cout<<"Enter value No "<<count+1<<":";
		cin>>list[count];
	}
}
