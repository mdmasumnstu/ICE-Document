#include<iostream>
using namespace std;
int main()
{
	int n,i,amount,j;
	cout<<"Number of Coin: "<<endl;
	cin>>n;
	
	cout<<"Amount"<<endl;
	cin>>amount;
	
	cout<<"Number of Coin and Amount: "<<n<<" "<<amount<<endl;
	int coin[n];
	cout<<"Enter the coin"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>coin[i];
	}
	
	cout<<"The coin: "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<coin[i]<<" ";
	}
	cout<<endl;
	
	int dp[n+1][amount+1];
	for(i=0;i<=n;i++)
	{
		dp[i][0]=1;
	}
	
	for (int j = 1; j <= amount; j++)
        dp[0][j] = 0; 
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=amount;j++)
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
	
	cout << "\nDP Table:\n";
for (i = 0; i <= n; i++) {
    for (j = 0; j <= amount; j++) {
        cout << dp[i][j] << " ";
    }
    cout << endl;
}
	cout<<"amount"<<amount<< ": " <<dp[n][amount]<<endl;
}
