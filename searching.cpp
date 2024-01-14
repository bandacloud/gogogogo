#include<iostream>
#include<iomanip>
using namespace std;

void swapping(int &a,int &b)
{
	int temp; 
	temp=a;
	a=b;
	b=temp;
}
void insertionSort(int list[], int size)
{
	int i,j;
	for(i=0;i<size;i++)
	{
		j=i;
		while(j>0 && list[j]<list[j-1])
		{
			swapping(list[j],list[j-1]);
			j--;
		}
	}
}
void print(int list[], int size)
{
	cout<<"-------------------------------------------------------------\n";
	for(int i=0;i<size;i++)
	{
		cout<<left<<setw(10)<<list[i];
	}
	cout<<endl;
	cout<<"-------------------------------------------------------------\n";
}
int binarySearch(int list[], int size,int value)
{
	int position=-1;
	int first=0;
	int middle;
	int last=size-1;
	bool found=false;
	
	while(!found && first<=last)
	{
		middle= ( first + last ) / 2;
		if(value==list[middle])
		{
			position=middle;
			found=true;
		}
		else if(list[middle]>value)
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
int main()
{
	int data[7]={5,2,6,1,8,4,3};
	int value;
	insertionSort(data,7);
	print(data,7);
	
	up:
	cout<<"\nEnter a number to search:";
	cin>>value;
	
	int position=binarySearch(data,7,value);
	if(position!=-1)
	{
		cout<<value<<" found in an array position "<< position <<endl;
		goto up;
	}
	else
	{
		cout<<value<<" is not available in the list"<<endl;
		goto up;
	}
	
	system("pause");
	return 0;
	
}
