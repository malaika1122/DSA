#include<iostream>
using namespace std;
int main()
{
    int n,m,a,b=0;
    cout << "Enter a three-digit number: ";
    cin >> n;
    m = n;
    while (m!= 0)
	 {
       a= m% 10;
       b += a*a*a;
       m/= 10;
    }
    if (b== n)
        cout<<"Number is an Armstrong number : ";
    else
        cout<<"Number is not an Armstrong number : ";
}