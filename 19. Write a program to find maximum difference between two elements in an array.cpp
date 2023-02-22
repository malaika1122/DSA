#include<iostream>
using namespace std;
int main()
{
	int i,m,j;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			m=0;
			if(arr[i]>arr[j])
			{
				m=arr[i];
				arr[i]=arr[j];
				arr[j]=m;
			}
		}
	}
	cout<<"Sorted array in assending order is ";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<< " ";
	}
	i=0;
	j=4;
	arr[j]-arr[i];
	cout<<"\n Maximum difference in array is "<<arr[j]-arr[i]<<" ";
	
	
	
}