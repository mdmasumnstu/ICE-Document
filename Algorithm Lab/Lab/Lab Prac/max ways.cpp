#include <bits/stdc++.h>

using namespace std;

int main()
{
    int w,n;
    cout<<"Enter weight"<<endl;
    cin>>w;
    cout<<"Enter coin_arr size"<<endl;
    cin>>n;
    int coin[n];
    cout<<"Enter coin_arr elements"<<endl;
    for(int i=0; i<n; i++)
    {
        cin>>coin[i];
    }
    int dp[n+1][w+1];
    for(int i=0; i<=n; i++)
    {
        dp[i][0]=1;
    }
    for(int j=0; j<=w; j++)
    {
        dp[0][j]=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(coin[i-1]>j)
            {
                dp[i][j]=dp[i-1][j];
            }
            else
            {
                dp[i][j]=dp[i-1][j]+dp[i][j-coin[i-1]];
            }
        }
    }

    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=w; j++)
        {

            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<dp[n][w]<<endl;

    int value=w;
    int a=n,b=w;
    while(value>0)
    {
        if(dp[a][b]==dp[a-1][b])
        {
            a--;
        }
        else
        {
            cout<<coin[a-1]<<" ";
            b-=coin[a-1];
            value-=coin[a-1];

        }
    }



    return 0;
}
