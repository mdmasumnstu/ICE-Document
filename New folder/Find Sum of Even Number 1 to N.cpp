#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	for(i=0;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("Summation of Even number: %d",sum);
}
