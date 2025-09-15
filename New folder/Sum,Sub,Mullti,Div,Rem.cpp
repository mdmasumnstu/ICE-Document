#include<stdio.h>
int main()
{
	int sum,sub,multi,div,rem;
	int a,b;
	printf("Enter the a,b:\n");
	scanf("%d %d",&a,&b);
	
	sum=a+b;
	sub=a-b;
	multi=a*b;
	div=a/b;
	rem=a%b;
	
	printf("sum: %d\n",sum);
	printf("sub: %d\n",sub);
	printf("multi: %d\n",multi);
	printf("div: %d\n",div);
	printf("rem: %d\nn",rem);
}
