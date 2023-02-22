#include<iostream>
using namespace std;
int main()
{
	int c=0;
	char string[20];
	cout<<"Enter a string : ";
	cin>>string;
	while(string[c]!='\0')
	{
		if(string[c] >= 'a' && string[c] <= 'z')
		{
			string[c]=string[c]-32;
			c++;
		}
	}
		cout<<"string in lower case is : "<<string;
}