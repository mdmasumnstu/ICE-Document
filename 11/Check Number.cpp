#include<stdio.h>
int main()
{
	int a,b;
	
	printf("Enter Input A:\n");
	scanf("%d",&a);
	printf("A: %d\n",a);
	
	printf("Enter Input B:\n");
	scanf("%d",&b);
	printf("B: %d\n",b);
	
	if(a>b)
	{
		printf("A big \n");
	}
	
	if(a<b)
	{
		printf("B big \n");
	}
	
	if(a==b)
	{
		printf("Equal \n");
	}

}
