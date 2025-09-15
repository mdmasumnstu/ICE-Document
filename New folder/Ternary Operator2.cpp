#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("Enter the number:\n");
	scanf("%d %d",&a,&b);
	printf("The Number:%d %d\n",a,b);
	
    max=(a>b)?a:b;
	printf("Max: %d\n",max);
}
