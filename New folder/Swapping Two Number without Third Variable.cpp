#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the number:\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping: %d %d\n",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping two number: %d %d\n",a,b);
}7
