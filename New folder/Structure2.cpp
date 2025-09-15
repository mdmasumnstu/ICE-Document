 #include<stdio.h>
 struct person
 {
 	int age;
 	float salary;
 };
 int main()
 {
 	struct person p[100];
 	int i,n;
 	printf("Enter the person Number:\n");
 	scanf("%d",&n);
 	
 	for(i=0;i<n;i++)
 	{
 		printf("Enter the information person: %d\n",i+1);
 		
 		printf("Enter the age: \n");
 		scanf("%d",&p[i].age);
 		
 		printf("Enter the salary: \n");
 		scanf("%d",&p[i].salary);
 	}
 	
 	for(i=0;i<4;i++)
 	{
 		printf("the information person: %d\n",i+1);
 		
 		printf("age: %d\n",p[i].age);
 		
 		
 		printf("salary: %f\n",p[i].salary);
 		
 	}
 }
