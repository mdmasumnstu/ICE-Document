#include<stdio.h>
int main()
{
	int n;
	printf("Enter the Year:\n");
	scanf("%d",&n);
	printf("The Number: %d\n",n);
	
	if((n%4==0)||(n%400==0 && n%100==0))
	{
		printf("The Leap Year: %d\n",n);
	}
	
	else
	{
		printf("Not Leap Year: %d\n",n);
	}
}
