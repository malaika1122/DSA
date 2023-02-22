#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter 1st number "<<" : ";
	cin>>m;
	cout<<"Enter 2nd number "<<" : ";
	cin>>n;
	cout<<"Numbers are : "<<m<<" "<<n<<"\n";
	m=m+n;
	n=m-n;
	m=m-n;
	cout<<"After swapping numbers are : "<<m<<" "<<n;
}