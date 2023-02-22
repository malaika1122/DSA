#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int c;
	for(int i=0;i<5;i++)
	{
		cout<<"Values "<<i+1<<":";
		cin>>arr[i];
	}
	cout<<"Values are ";
		for(int i=0;i<5;i++)
		{
			cout<<arr[i]<<" ";
		}
	cout<<"enter appearance of that number ";
	cin>>c;
	int count=0;
		for(int i=1;i<5;i++)
		{
			if(c==arr[i])
			count++;
		}
		cout<<"value found in array is ";
}