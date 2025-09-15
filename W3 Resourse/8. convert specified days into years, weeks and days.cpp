#include<iostream>
using namespace std;
int main()
{
	int day,week,year;
	cout<<"Enter the day number: "<<endl;
	cin>>day;
	cout<<"Input: "<<day<<endl;
	
	year= day/365;
	week=(day%365)/7;
	day= day-(year*365+week*7);
	
	cout<<"Year: "<<year<<endl;
	cout<<"Week: "<<week<<endl;
	cout<<"Day: "<<day<<endl;
}
