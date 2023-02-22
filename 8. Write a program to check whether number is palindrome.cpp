#include<iostream>
using namespace std;
int main()
{
	int n,m=0;
	int b,c;
	cout<<"Enter a number ";
	cin>>n;
	c=n;
	while(n!=0)
	{
		b=n%10;
		m=m*10+b;
		n/=10;
	}
	if(c==m)
	cout<<"number is palindrome : ";
	else
	cout<<"number is not palindrome : ";
}