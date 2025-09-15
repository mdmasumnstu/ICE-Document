#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, w;
    cout << "Enter Weight: ";
    cin >> w;
    cout << "Enter number of elements: ";
    cin >> n;

    int c[n];
    cout << "Enter subset elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int dp[n + 1][w + 1];


    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 1;
    }
    for (int j = 1; j <= w; j++)//j==1
    {
        dp[0][j] = 0;
    }


    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(dp[i-1][j]==1)
            {
                dp[i][j]=1;
            }

            else
            {
                if(c[i-1]>w)
                {
                    dp[i][j]=0;
                }

                else
                {
                    dp[i][j]=dp[i-1][j-c[i-1]];
                }

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
    cout << dp[n][w] << endl;

    int value=w;
    int a=n,b=w;
    while(value>0)
    {
        if(dp[a][b]==dp[a-1][b])
        {
            a--;
        }
        else{
            cout<<c[a-1]<<" ";
            b-=c[a-1];
            value-=c[a-1];

        }
    }



return 0;
}
