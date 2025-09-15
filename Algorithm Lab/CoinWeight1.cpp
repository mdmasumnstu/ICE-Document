#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int amount,n;

    cout<<"Enter amount: "<<endl;
    cin>>amount;
    cout<<"Amount is: "<<amount<<endl;

    cout<<"Enter size: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter coin: "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"The coin: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    int dp[n+1][amount+1];

    for(i=0;i<=n;i++)
    {
        dp[i][0]=1;
    }
    for(j=1;j<=amount;j++)
    {
        dp[0][j]=0;
    }

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=amount;j++)
        {
            if(a[i-1]>j)
            dp[i][j]=dp[i-1][j];
        
        else
        {
            dp[i][j]=dp[i-1][j] + dp[i][j-a[i-1]];
        }
    }
    cout<<"Number of way: "<<dp[amount]<<endl;
}
}