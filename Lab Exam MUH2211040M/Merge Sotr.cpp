#include<iostream>
using namespace std;

int main()
{
	int a[100],b[100],n,m,i;
	
	cout<<"Enter the First array size:"<<endl;
	cin>>n;
	cout<<"The Array First Size is: "<<n<<endl;
	
	cout<<"Input First Array Element:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The First Array is:"<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	
	
	
	
	
	cout<<"Enter the Second array size:"<<endl;
	cin>>m;
	cout<<"The Array Second Size is: "<<m<<endl;
	
	cout<<"Input Second Array Element:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	
	cout<<"The Second Array is:"<<endl;
	for(i=0;i<m;i++)
	{
		cout<<b[i]<<endl;
	}
	
	
	int c[200];
	int p=m+n;
	cout<<"Merge Array: "<<endl;
	for(i=0;i<p;i++)
	{
		c[i]=a[i];
		c[i]=b[i];	
	}
	
	cout<<"Merge the two array: "<<endl;
	for(i=0;i<p;i++)
	{
		cout<<c[i]<<endl;
	}
	
	
}
