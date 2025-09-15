#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("Enter the array size:\n");						//array size
	scanf("%d",&n);
	
	printf("Enter the array element:\n");					//input array element
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nThe Array is:\n");
	for(i=0;i<n;i++)									//print element
	{
		printf("%d\t",a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n-1;j++)
	    {
	        if(a[j]>a[j+1])
	        {
	            temp=a[j];
	            a[j]=a[j+1];
	            a[j+1]=temp;
	        }
	    }
	}
	
	printf("\n\nThe Bubble Sort:\n");
	for(i=0;i<n;i++)
	{
	    printf("%d\t",a[i]);
	}
}

