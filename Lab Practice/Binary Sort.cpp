#include<iostream>
using namespace std;

int main()
{
	int len;
	
	cout<<"Enter the length"<<endl;
	cin>>len;
	int a[len];
	
	cout<<"Enter the data key"<<endl;
	cin>>data
	
	cout<<"Enter the array value"<<endl;
	for(int i;i<len;i++)
	{
		cin>>a[i]<<" ";
	}
}

int binary(int a[],int len,int data)
{
	int low,high,mid;
	low=0;
	high=len-1;
	
	while(low<=high)
	{
		mid=(low+high)/2;
		
		if(data<a[mid])
		{
			high=mid-1;
		}
		else if(data>a[mid])
		{
			high=mid+1;
		}
		else
		{
			return mid;
		}
	}
	cout<<"Not find the data"<<endl;	
}
