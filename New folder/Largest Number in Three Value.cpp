#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the number:\n");
	scanf("%d %d %d",&a,&b,&c);
	printf("The Number: %d %d %d\n",a,b,c);
	
	if(a>b)
	{
	   if(a>c)
	   {
	   	printf("A: %d\n",a);
	   	
	   }
	   else
	   {
	   	printf("C: %d\n",c);
		}	
	}
	else
	{
	  if(b>c)
	  {
	  	printf("B: %d\n",b);
	  }	
	 else
		  {
		  	printf("C: %d\n",c);
		  }
	}
}
