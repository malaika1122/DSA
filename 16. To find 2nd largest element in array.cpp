#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	int a=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>a)
		{
			a=arr[i];
		}
	}
	int b;
	 cout<<"1st largest value of array is "<<a<<endl;
	for(i=1;i<5;i++)
	{
		if(arr[i]<a)
		{
			b=arr[i];
		}
	}
	 cout<<"2nd largest value of array is "<<b;
}