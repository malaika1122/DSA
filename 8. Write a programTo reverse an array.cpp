#include<iostream>
using namespace std;
int main()
{
	int arr[5];
	int a,temp;
	int i,j;
	for( i=0;i<a;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
    	cout<<"Values are ";
		for(i=0;i<a;i++)
	    	{
			cout<<arr[i]<<" ";
	    	}
	    	i<a/2;
	    	j--;
			 for(i=0; j=a-1;i++)
		    	{
					 if(arr[i]==arr[j])
			    	{
					  temp=arr[i];
					  arr[i]=arr[j];
					  arr[j]=temp;
			    	}
	        	}
			cout<<"Reverse array values are "<<temp;
}