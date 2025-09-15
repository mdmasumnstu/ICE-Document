#include<stdio.h>
int main()
{
	int s,m,h,t;
	printf("Enter the Time of Second:\n");
	scanf("%d",&t);
	
	h=t/3600;
	m=(t%3600)/60;
	s=(t%3600)%60;
	
	printf("Hour:Minute:Second  =%d:%d:%d\n",h,m,s);
}
