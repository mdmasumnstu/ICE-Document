
#include<stdio.h>
int main()
{
	int a[5],i,temp,j;
	printf("Enter the element:\n");

	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}

	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++);
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}

		printf("%d\t",a[i]);
	}

}
