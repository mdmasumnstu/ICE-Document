#include<iostream>
using namespace std;
void counting(int a[],int n)
{
	//maximum value
	
	int max=a[0],i;
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	
	//create count frequency array
	
	int count[max+1]={0};
	
	//count occurance of each element
	for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}
	
	//update original array with stored element
	
	int index=0;
	for(i=0;i<=max;i++)
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
	int n;
	cout<<"Element number: "<<endl;
	cin>>n;
	
	int a[n];
	cout<<"Enter Element"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	cout<<"Arrat"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
	counting(a,n);
	
	cout<<endl;
	cout<<"original Array"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

