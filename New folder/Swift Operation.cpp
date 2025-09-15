#include<stdio.h>
int main()
{
	int a,b,c,d,sum,sub,mul,div,rem;
	printf("Enter the number:\n");
	scanf("%d %d",&a,&b);
	printf("The two value: %d %d\n",a,b);
	
    c=a>>2;
    d=b<<3;
    
    printf("After swift: %d %d",c,d);
    
    sum=c+d;
    sub=c-d;
    mul=c*d;
    div=c/d;
    rem=c%d;
    printf("sum:sub:mul:div:rem: %d:%d:%d:%d:%d\n",sum,sub,mul,div,rem);
}
