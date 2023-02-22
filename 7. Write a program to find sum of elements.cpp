#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int sum=0,num;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
		int i;
			for(int i=0;i<5;i++)
			{
			    	sum=sum+arr[i];
				
			}
			cout<<"Sum of values are:"<<sum;
}