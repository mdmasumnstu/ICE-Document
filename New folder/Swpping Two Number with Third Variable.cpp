#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("Enter the number:\n");
	scanf("%d %d",&a,&b);
	printf("Before swapping: %d %d\n",a,b);
	
	temp=a;
	a=b;
	b=temp;
	
	printf("After swapping: %d %d\n",a,b);
}
