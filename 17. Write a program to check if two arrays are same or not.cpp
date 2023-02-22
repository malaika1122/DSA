#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int array[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter number for 1st array "<<" "<<i+1<<":";
		cin>>array[i];
	}
		for(j=0;j<5;j++)
	{
		cout<<"Enter number for 1st array "<<" "<<j+1<<":";
		cin>>array[j];
	}
	bool flag;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
	if(array[i]!=array[j])
	flag++;	
	}	
	}
	if(flag==1)
	{
		cout<<" Both arrays are equal ";
		
}S
	else
	{
	cout<<" Both arrays are not equal ";	
	}
}