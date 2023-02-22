#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int temp,i,j; 
	for(i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(arr[i]<arr[j+1])
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array in ascending order is:";
	for(i=0;i<5;i++)
		{
		cout<<arr[i]<<" ";	
		}
}