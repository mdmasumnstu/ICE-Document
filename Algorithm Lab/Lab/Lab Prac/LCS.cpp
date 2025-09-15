#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    cout<<"Enter first string"<<endl;
    cin>>a;
    cout<<"Enter second string"<<endl;
    cin>>b;
    int n=a.size();
    int w=b.size();
    int dp[n+1][w+1];
    for(int i=0; i<=n; i++)
    {
        dp[i][0]=0;
    }
    for(int j=0; j<=w; j++)
    {
        dp[0][j]=0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=w; j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=1+dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
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


    cout<<"lcs length:"<<dp[n][w]<<endl;

    int i=n,j=w;
    string lcs;
    while(i>0&&j>0)
    {
        if(a[i-1]==b[j-1])
        {
            lcs=a[i-1]+lcs;
            i--;
            j--;
        }
        else if(dp[i][j-1]<dp[i-1][j])
        {
            i--;
        }
        else
        {
            j--;
        }
    }
    cout<<"Lcs string:"<<lcs<<endl;



    return 0;
}
