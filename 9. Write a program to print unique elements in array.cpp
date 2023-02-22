#include<iostream>
using namespace std;
int main()
{
	int arr[5]={2,4,2,6,4};
	int i,j;
	cout<<"Array values are "<<endl;
		for(i=0;i<5;i++)
		{
			cout<<arr[i]<<" "<<endl;
		}
			cout<<"Unique array values are "<<endl;
		for(i=0;i<5;i++)
		{
			for(j=0;j<i;j++)
			{
			if(arr[i]==arr[j])
			{
			cout<<arr[i]<<" "<<endl;	
			}
			}
		}
}