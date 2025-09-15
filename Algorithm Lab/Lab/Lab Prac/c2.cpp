#include<iostream>
using namespace std;

counting(int a[],int n)
{ int i;
	int max= a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	int count[max+1]={0};
		for(i=1;i<n;i++)
	{
		count[a[i]]++;
	}
	
	int index=0;
	for(int i=0;i<=max;i++)
	{
		while(count[i]>0)
		{
			a[index++]=i;
			count[i]--;
		}
	}
}


int main()
{
	int n,i;
	cout<<"enter number element"<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter Element: "<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"The Array: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	counting(a,n);
	cout<<"The sorted array: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
