#include<stdio.h>
int main()
{
	int a[5],i,m=0;
	int data=40;

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("\n %d\t",a[i]);
	}

	for(i=0;i<5;i++)
	{
		if(data==data)
		{
			printf("%d data at location %d",data,i);
			m++;
		}
	}
	if(m=0)
	{
		printf("\n no found\n");
	}
	else
	{
		printf("\nfound\n");
	}
}
