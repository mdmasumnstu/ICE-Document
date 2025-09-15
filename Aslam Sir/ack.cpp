#include<iostream>
using namespace std;

int ack(int m,int n)
{

    if(m==0)
    {
        return (n+1);
    }

    else if(m=!0 && n==0)
    {
        return ack(m-1,1);
    }

    else
    {
        return ack(m-1,(m,n-1));
    }
}

int main()
{
    int a,b;
    cout<<"Enter the Value of a,b:\n");
    cin>>a >>b;
    ack(a,b);
    cout>> m>>n;
}
