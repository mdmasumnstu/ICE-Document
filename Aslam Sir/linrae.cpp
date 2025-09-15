#include<stdio.h>
int main()
{
	int a[100],n,i=0,data;
	printf("Enter the array size:\n");
	scanf("%d",&n);								
	
	printf("\nEnter the value:\n");
	for(i=0;i<n;i++)						   
	{
		scanf("%d",&a[i]);	
	}
	
	printf("\nThe Array is:\n");
	for(i=0;i<n;i++)						   
	{
		printf("%d\t",a[i]);
	}
	
	printf("\nEnter the searching value:\n");		
	scanf("%d",&data);
	printf("\nThe Searching value is: %d\n",data);
	
	int m=0;
	
	for(i=0;i<n;i++)								
	{
		if(a[i]==data)
		{
			printf("Matched and Location: %d\n",i+1);
			m++;
			break;
			
		}
		
	}
	if(m==0)
		{
			printf("Not Matched\n");
		
		}
	
	
}



