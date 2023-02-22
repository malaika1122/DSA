#include<iostream>
using namespace std;
int main()
{
	int a,b,rev;
	rev=0;
	cout<<"Enter a number : "<<" ";
	cin>>a;
	while(a!=0)
	{
		b=a%10;
		rev=b+(rev*10);
		a=a/10;
	}
	cout<<" Reverse number is : "<<" "<<rev;
}