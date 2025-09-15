#include<stdio.h>
#include<math.h>
int main()
{
	int d,day,m,y;
	printf("Enter the day:\n");
	scanf("%d",&d);
	
	y=d/365;
	m=(d%365)/30;
	day=(d%365)%30;
	
	printf("Year: %d\n",y);
	printf("month: %d\n",m);
	printf("Day: %d\n",day);
}
	
