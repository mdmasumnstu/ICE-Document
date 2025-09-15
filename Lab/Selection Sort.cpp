#include<iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,temp;
	
	//input array size
	cout<<"Enter array size:"<<endl;
	cin>>n;
	cout<<"The Size:"<<endl;
	cout<<n<<endl;
	
	
	//input element
	cout<<"Enter the input"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//print element
	cout<<"The Array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
	
	//sort element
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]>a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
			
			cout<<"After Sorting Element:"<<endl;
			for(i=0;i<n;i++)
			{
				cout<<a[i] <<endl;
			}	
		}
		
	}
	
	/*
	
	cout<<"The Sort Element: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i] <<endl;
	}
	
	*/

}
