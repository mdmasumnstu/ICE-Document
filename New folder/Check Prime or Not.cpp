#include<stdio.h>
int main()
{
	int n,i,m=0;
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			m++;
			break;
		}
	}
	if(m==0)
	{
		printf("%d is prime number\n",n);
	}
	else
	printf("%d is not prime number\n",n);
}
