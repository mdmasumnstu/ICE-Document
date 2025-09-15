#include<stdio.h>
int main()
{
	int a[5],i,data,m=0;
	
	printf("enter the element\n");
	
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("Enter the search data");
	scanf("%d",data);
	printf("%d\n", data);
	
	for(i=0;i<5;i++)
	{
		if(a[i]==data)
		{
			printf("matched at location %d",i+1);
			m++;
		}
	}
	if(m=0)
	{
		printf("\n no found\n");
	}
	
}
