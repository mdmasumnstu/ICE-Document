#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter the number:\n");
	scanf("%d",&a);
	printf("The Number: %d\n",a);
	
	b=sqrt(a);
	
	printf("The Square Root Number: %d\n",b);
	c=(a-(b*b));
	
	if(c==0)
	{
		printf("This Perfect SquareRoot Number\n");
	}
	else
	{
		printf("Not Perfect SquareRoot Number\n");
	}
}
