#include<iostream>
using namespace std;
int main()
{
	int i=0,n;
	cout<<"Enter the size: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter The Value: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The Array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
