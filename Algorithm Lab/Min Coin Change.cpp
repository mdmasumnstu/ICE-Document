#include<iostream>
using namespace std;

void NumberCoins(int a[], int n, int b)
{
    int dp[n+1][b+1];

    for(int i=0;i<=n;i++)
    {
        dp[i][0]= 1;
    }
    for(int j=0;j<=b;j++)
    {
        dp[0][j]= 0;
    }

    for(int i=1;i<=n;i++)
    {
        for( int j=1;j<=b;j++)
        {
            
             if(a[i-1]>j)
            {
                dp[i][j] = dp[i-1][j];
            }
            else 
            dp[i][j]=dp[i-1][j]+dp[i][j-a[i-1]];
        
        }
    }
}

int main()
{
    int m,b; 
    cout<<"Enter the weight: "<<endl;
    cin>>m;
    int a[m]; 
    cout<<"Enter the coin element: "<<endl;

    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cout<<"The coin element: "<<endl;
    for(int i=0;i<m;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cin>>b;
    NumberCoins(a,m,b);

    
}