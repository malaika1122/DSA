#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
		cout<<"Odd numbers are "<<arr[0];
		for(int i=1;i<5;i++)
		{
			if(arr[i]%2!=0)
			{
				cout<<arr[i]<<" ";
			}
		}
	}