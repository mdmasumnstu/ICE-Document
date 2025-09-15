#include<stdio.h>
int main()
{
	int a,b,c,n,o,x,t;
	printf("Enter the value:\n");
	scanf("%d %d %d",&a,&b,&c);
	
	n= a&b;
	o= a|b;
	x= a^b;
	t= ~c;
	
	printf("The value: and:or:xor:not= %d:%d:%d:%d\n",n,o,x,t);
}
