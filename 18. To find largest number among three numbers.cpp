#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter 1st number "<<"a"<<" : ";
	cin>>a;
	cout<<"Enter 2nd number "<<"b"<<" : ";
	cin>>b;
	cout<<"Enter 3rd number "<<"c"<<" : ";
	cin>>c;
	if(a>=b && a>=c)
	{
		cout<<"Largest number is : "<<a<<" ";
	}
	else if(b>=a && b>=c)
	{
		cout<<"Largest number is : "<<b<<" ";
	}
	else
	{
		cout<<"Largest number is : "<<c<<" ";
	}
}