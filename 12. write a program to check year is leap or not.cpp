#include<iostream>
using namespace std;
int main()
{
	int year;
	cout<<"Enter year : "<<" ";
	cin>>year;
	if(year%400==0)
	{
		cout<<"Yeaar is leap year ";
	}
	else if (year%100==0)
	{
		cout<<"year is not a lear year ";
	}
	else if(year%4==0)
	{
		cout<<"year is leap year ";
	}
	else 
	{
	cout<<"year is not a lear year ";
	}

}