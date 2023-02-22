#include<iostream>
using namespace std;
int main()
{
int i,j,num,min,max,c,count;
int arr[5];
     
     {
	 
	cout<<"Press 1 for finding minimum value"<<"\n";
	cout<<"Press 2 for finding maximum value"<<"\n";
	cout<<"Press 3 for finding any value"<<"\n";
	cout<<"Press 4 for check how many times value come"<<"\n";
	cout<<"Press 5 for printing odd value"<<" \n";
	cout<<"Press 6 for printing even value"<<"\n ";
    cout<<"Press 7 for finding sum of values"<<"\n ";
	cout<<"Press 8 for Reverse an array"<<" \n";
	cout<<"Press 9 for printing unique value"<<" \n";
	cout<<"Press 10 for Exit "<<"\n";
	cout<<"Press any key to run the program"<<"\n";
	cin>>num;
}

switch (num)
{
case1:
	{
		int i,a,b;
	int arr[5];
	int even[a];
	int odd[b];
	cout<<"Enter a number : "<<i+1<<" ";
	cin>>arr[i];
	
	for(i=0;i<5;i++)               
	{
	
		cout<<arr[i]<<" ";
	}
	for(i=0;i<5;i++)
	{
		if(arr[i]%2==0)
		{
			even[a]=arr[i];
			a++;
		}
	}
		for(i=0;i<5;i++)
	{
		if(arr[i]%2!=0)
		{
			odd[b]=arr[i];
			b++;
		}
	}
	for(i=0;i<a;i++)
	{
		cout<<even[a];
	}
	for(i=0;i<b;i++)
	{
		cout<<odd[b];
	}
	
	
	break;
}
case2:
	{
	int i;
	int array[i];
	for(i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>array[i];
	}
	cout<<"Values are ";
		for(int i=0;i<5;i++)
		{
			cout<<array[i]<<" ";
		}
	int odd=0;
	int even=0;
	for(int i=0;i<5;i++)
	{
		if(array[i]%2==0)
		even++;
		else
		odd++;
	}
	int count=0;
	if(even=0)
	cout<<"\n there are "<<" "<<1<<"number";
	else
	{
		if(even>1)
		cout<<"\n there are  "<<" "<<even <<"Even number";
		else
		cout<<"there are no even numbers ";
		
	}
	if(odd==0)
	cout<<"\n there are "<<" "<<odd<<" "<<"Even number";
	else
	{
		if(odd>1)
		cout<<"\n there are  "<<" "<<odd <<"odd number";
		else
		cout<<"there are no odd numbers ";	
	}
	}
break;
}
case3:
	{
		int arr[5];
	int temp,i,j; 
	for(i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(arr[i]>arr[j+1])
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array in ascending order is:";
	for(i=0;i<5;i++)
		{
		cout<<arr[i]<<" ";	
		}
break;
}
case4:
	{
		int arr[5];
	int temp,i,j; 
	for(i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	for(i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			if(arr[i]<arr[j+1])
			{
				temp=arr[i];
				arr[i]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	cout<<"Sorted array in descending order is:";
	for(i=0;i<5;i++)
		{
		cout<<arr[i]<<" ";	
		}
break;
}
case5:
	{
	int arr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	int a=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]<a)
		{
			a=arr[i];
		}
	}
	int b;
	 cout<<"1st smallest value of array is "<<a<<endl;
	for(i=1;i<5;i++)
	{
		if(arr[i]<b)
		{
			b=arr[i];
		}
	}
	 cout<<"2nd smallest value of array is "<<b;
break;
}
case6:
	{
			int arr[5];
	int i;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	int a=arr[0];
	for(i=0;i<5;i++)
	{
		if(arr[i]>a)
		{
			a=arr[i];
		}
	}
	int b;
	 cout<<"1st largest value of array is "<<a<<endl;
	for(i=1;i<5;i++)
	{
		if(arr[i]<a)
		{
			b=arr[i];
		}
	}
	 cout<<"2nd largest value of array is "<<b;
break;
}
case7:
	{
	int i,j;
	int array[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter number for 1st array "<<" "<<i+1<<":";
		cin>>array[i];
	}
		for(j=0;j<5;j++)
	{
		cout<<"Enter number for 1st array "<<" "<<j+1<<":";
		cin>>array[j];
	}
	bool flag;
	for(i=0;i<5;i++)
	{
	for(j=0;j<5;j++)
	{
	if(array[i]!=array[j])
	flag++;	
	}	
	}
	if(flag==1)
	{
		cout<<" Both arrays are equal ";
		
}
	else
	{
	cout<<" Both arrays are not equal ";	
	}
break;
}
case8:
	{
	int i,j;
	int a[5];
	int b[7];
	int c[5];
	for(i=0;i<5;i++)
	{
		cout<<"Enter values for 1st array : "<<i+1<<":";
		cin>>a[i];
		c[i]=a[i];
	}
	j=i;
	for(i=0;i<5;i++)
	{
		cout<<"Enter values for 2nd array : "<<i+1<<":";
	for(i=0;i<5;i++)
	{
		cin>>b[i];
		c[j]=b[i];
		j++;
	}
	cout<<"\n Merge arrays are : "<<" ";
	for(i=0;i<j;i++)
	{
		cout<<c[i]<<" ";
	}
	 }
 }
break;
}
case9:
	{
	int i,m,j;
	int arr[5];
	for(int i=0;i<5;i++)
	{
		cout<<"Enter values "<<i+1<<":";
		cin>>arr[i];
	}
	for(int i=0;i<5;i++)
	{
		for(j=i;j<5;j++)
		{
			m=0;
			if(arr[i]>arr[j])
			{
				m=arr[i];
				arr[i]=arr[j];
				arr[j]=m;
			}
		}
	}
	cout<<"Sorted array in assending order is ";
	for(i=0;i<5;i++)
	{
		cout<<arr[i]<< " ";
	}
	i=0;
	j=4;
	arr[j]-arr[i];
	cout<<"\n Maximum difference in array is "<<arr[j]-arr[i]<<" ";
break;
}
case 10:
	{
		cout<<"Exit the program "<<"\n";
		break;
	}
Default:
 cout<<"invalid number"<<" ";
}
}
