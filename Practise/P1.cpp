#include<iostream>
using namespace std;

class Employee
{
	protected:
		int id[20];
	    float salary;
		float da;
	public:
		void getdata();
		void showdata();
};

void Employee::getdata()
{
	int i;
	for(i=0;i<20;i++)
	{
		cout<<"Enter Id:"<<endl;
		cin>>id[i];
		cout<<"Enter Salary:"<<endl;
		cin>>salary;
	}
}


void Employee::showdata()
{
	int i;
	for(i=0;i<20;i++)
	{
		cout<<"id:"<<endl;
		cout<<id[i];
		
		cout<<"Salary:"<<endl;
		cout<<salary;
		
		
		da= salary*(20/100);
		cout<<"da:"<<endl;
		
		cout<<da;
	}
	
}


int main()
{
	Employee m[20];
	
	for(int i=0;i<20;i++)
	{
		m[i].getdata();
	}
	
	for(int i=0;i<20;i++)
	{
		m[i].showdata();
	}
	
}
