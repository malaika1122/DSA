#include<iostream>
using namespace std;
int main()
{
	int i,a,b;
	int arr[5];
	int even[a];
	int odd[b];
	cout<<"Enter a number : "<<i+1<<" ";
	cin>>arr[i];
	
	for(i=0;i<5;i++)               
	{
	
		cout<<arr[i]<<" ";
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			even[a]=arr[i];
			a++;
		}
	}
		for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			odd[b]=arr[i];
			b++;
		}
	}
	for(i=0;i<a;i++)
	{
		cout<<even[a];
	}
	for(i=0;i<b;i++)
	{
		cout<<odd[b];
	}
	
	
	
}