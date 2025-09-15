#include<iostream>

int ack(int m,int n)
{

    if(m==0)
    {
        return n+1;
    }

    else if(m=!0 && n==0)
    {
        return ack(m-1,1);
        
    }

    else
    {
        return ack((m-1),(m,n-1));
    }
}

int main()
{
    int a,b;
    std::cout<<"Enter the value";
    std::cin>> a>>b;
    std::cout<<a <<b;
    ack(a,b);
    int result =ack(a,b);
    std::cout<<result;
    
    
    
    
}

