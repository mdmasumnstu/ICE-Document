#include<stdio.h>
int main()
{
	float n,i,sum=0;
	printf("Enter the number: \n");
	scanf("%f",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+(1/i);
	}
	printf("Summation of Odd number: %f",sum);
}
