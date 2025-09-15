#include<iostream>
using namespace std;
int main()
{
	int data[10]={22,65,1,99,32,17,74,49,33,2};
	int k=0,loc=0,max=data[0],n=10;
	
	for(k=0;k<n;k++)
	{
		if(max<data[k])
		{
			loc=k;
			max=data[k];
		}
	}
	cout<<"Data: "<<max<<endl<<"Location: "<<loc<<endl;
	
}
