#include<stdio.h>
int main()
{
	int n,i,m;
	printf("Enter the number: \n");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)
	{
		m=n*i;
		printf("%dx%d=%d\n",n,i,m);
	}

}
