#include<iostream>
using namespace std;
int main()
{
	int a,b,t;
	cout<<"Enter 1st number "<<" : ";
	cin>>a;
	cout<<"Enter 2nd number "<<" : ";
	cin>>b;
	cout<<"Numbers are : "<<a<<" "<<b<<"\n";
	t=a;
	a=b;
	b=t;
	cout<<"After swapping numbers are : "<<a<<" "<<b;
}