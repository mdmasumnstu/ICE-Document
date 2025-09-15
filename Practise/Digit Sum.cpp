#include<iostream>
using namespace std;
int main()
{
	int m,n,sum;
	cin>>n;
	   
	while(n>0)    
	{    
	m=n%10;    
	sum=sum+m;    
	n=n/10;    
	}    
	cout<<sum;  
	  
}
