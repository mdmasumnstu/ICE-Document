#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number:\n");
	scanf("%d",&a);
	printf("The Number: %d\n",a);
	
	if(a>0)
	{
		printf("The Positive Number\n");
	}
	else if(a<0)
	{
		printf("The Negative Number\n");
	}
	else if(a==0)
	{
		printf("The number Zero\n");
	}
	else
	{
		printf("The number complex\n");
	}
}
