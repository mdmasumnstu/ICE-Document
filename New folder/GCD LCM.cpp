#include<stdio.h>
int main()
{
	int a,b,c,rem,d,lcm,gcd;
	printf("Enter the number: \n");
	scanf("%d %d",&a,&b);
	
	c=a;
	d=b;
	
	while(d!=0)
	{
	rem=c%d;
	c=d;
	d=rem;
    }
    gcd=c;
    lcm= (a*b)/gcd;
	printf("%d is gcd\n",gcd);
	printf("%d is lcm\n",lcm);   
}
	
