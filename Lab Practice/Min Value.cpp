#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"Enter the size: "<<endl;
	cin>>n;
	
	//input the array value
	int a[n];
	cout<<"Enter The Value: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	//Output The Array
	cout<<"The Array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	
	//Minimum The Array Value
	int min=a[0];
	for(i=1;i<n;i++)
	{
		if(min<a[i])
		{
			min=min;
		}
	}
	cout<<endl;
	cout<<"The Minimum Value: "<<min<<endl;
}
