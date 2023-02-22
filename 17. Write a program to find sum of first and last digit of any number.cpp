#include<iostream>
using namespace std;
int main()
{
	int n,i,a,b;
	int sum=0;
	cout<<"Enter a number ";
	cin>>n;
	for(i=0;n!=0;n=n/10)
	{
		if(i==0)
		{
			b=n%10;
			i++;
		}
		a=n%10;
	}
	sum=a+b;
	cout<<"sum of first "<<a<<" and last digit "<<b<<"="<<sum;
}