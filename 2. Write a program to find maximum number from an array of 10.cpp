#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	for(int i=0;i<10;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"Values are ";
		for(int i=0;i<10;i++)
		{
			cout<<arr[i]<<" ";
		}
		int max=arr[0];
			for(int i=1;i<10;i++)
			{
				if(max<arr[i])
				{
					max=arr[i];
				}
			}
			cout<<"Maximum value is "<<max;
}