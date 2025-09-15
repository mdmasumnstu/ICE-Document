#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;

        int a = stoi(s.substr(0, 2));
        int b = stoi(s.substr(2, 2));

        int sum=a+b;
        int m=sum*sum;

        if(m==stoi(s))
        {
            cout<<a<<" "<<b<<endl;
        }
        else{

            cout<<"-1"<<endl;
        }
    }
}