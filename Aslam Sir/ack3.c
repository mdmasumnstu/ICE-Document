#include<stdio.h>

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
    printf("Enter the a,b:\n");
    scanf("%d %d",&a,&b);
    printf("%d %d",a,b);
        
}

