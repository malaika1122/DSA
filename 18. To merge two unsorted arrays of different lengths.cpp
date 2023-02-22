#include<iostream>
using namespace std;
int main()
{
	int i,j;
	int a[5];
	int b[7];
	int c[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter values for 1st array : "<<i+1<<":";
		cin>>a[i];
		c[i]=a[i];
	}
	j=i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter values for 2nd array : "<<i+1<<":";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
		c[j]=b[i];
		j++;
	}
	cout<<"\n Merge arrays are : "<<" ";
	for(i=0;i<j;i++)
	{
		cout<<c[i]<<" ";
	}
	 }
}