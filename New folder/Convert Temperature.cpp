#include<stdio.h>
int main()
{
	float a,b,cel,fah;
	printf("Enter the Celsius: \n");
	scanf("%f",&a);
	
	printf("Enter the Fahrenheit: \n");
	scanf("%f",&b);
	
	fah= 1.8*a+32;
	cel=0.55*(b-32);
	
	printf("Fahrenherit: %f\n",fah);
	printf("Celsius: %f\n",cel);
}
	
	
