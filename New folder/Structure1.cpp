#include<stdio.h>
struct Person
{
		int age;
		float salary;
};
 int main()
{
struct Person p[100];
int i,n;
printf("Enter the Information: \n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
	printf("Enter the Person Index:\n");
	scanf("%d",&p );
	printf("Enter the Person Age:\n");
	scanf("%d",&p[i].age);
	
	printf("Enter the Person Salary:\n");
	scanf("%f",&p[i].salary);
	
	printf("Person Informatiion: person %d\n age %d\n salary %f\n",p[i],p[i].age,p[i].salary);
}
	
}
