#include<iostream>
using namespace std;

int main()
{
	int a[100],n,i,j,k,temp;
	
	cout<<"Enter array size:"<<endl;
	cin>>n;
	cout<<n<<endl;
	
	
	
	cout<<"Enter the input"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	
	cout<<"Before Sorting The array is: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" "<<endl;
	}
	
	
	for(k=1;k<n;k++)
	{
		temp=a[k];
		j=k-1;
		
		while(j>=0 && temp<=a[j])
		{
			a[j+1]=a[j];
			j=j-1;
			
		}
		a[j+1]=temp;
		
		cout<<"Sorting Element:"<<endl;
		for(i=0;i<n;i++)
		{
			cout<<i<<" "<<i<<a[i] <<endl;
		}
	}
	
	
	
	
}
