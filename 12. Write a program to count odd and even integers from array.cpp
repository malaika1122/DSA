#include<iostream>
using namespace std;
int main()
{
	int i;
	int array[i];
	for(i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>array[i];
	}
	cout<<"Values are ";
		for(int i=0;i<5;i++)
		{
			cout<<array[i]<<" ";
		}
	int odd=0;
	int even=0;
	for(int i=0;i<5;i++)
	{
		if(array[i]%2==0)
		even++;
		else
		odd++;
	}
	int count=0;
	if(even=0)
	cout<<"\n there are "<<" "<<1<<"number";
	else
	{
		if(even>1)
		cout<<"\n there are  "<<" "<<even <<"Even number";
		else
		cout<<"there are no even numbers ";
		
	}
	if(odd==0)
	cout<<"\n there are "<<" "<<odd<<" "<<"Even number";
	else
	{
		if(odd>1)
		cout<<"\n there are  "<<" "<<odd <<"odd number";
		else
		cout<<"there are no odd numbers ";	
	}
}