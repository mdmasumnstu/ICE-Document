#include <iostream>
using namespace std;

int main() 
{
    int amount, n;
    
    cout << "Enter the Amount: ";
    cin >> amount;

    cout << "Enter the Coins number: ";
    cin >> n;

    int coin[n];
    cout << "Enter the coins: ";
    for (int i = 0; i < n; i++) 
    {
        cin >> coin[i];
    }

    int dp[n + 1][amount + 1];

   
    for (int i = 0; i <= n; i++) 
    {
        dp[i][0] = 1; 
    }
    for (int j = 1; j <= amount; j++) 
    {
        dp[0][j] = 0;
    }

    for (int i = 1; i <= n; i++) 
    {
        for (int j = 1; j <= amount; j++) 
        {
            if (dp[i - 1][j]) 
            {
                dp[i][j] = 1; 
            } 
            else if (coin[i - 1] <= j) 
            {
                dp[i][j] = dp[i - 1][j - coin[i - 1]]; 
            } 
            else 
            {
                dp[i][j] = 0; 
            }
        }
    }

    
    for (int i = 0; i <= n; i++) 
    {
        for (int j = 0; j <= amount; j++) 
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
   
    cout << "subset Sum " << amount << " exist? ";
    if (dp[n][amount]) 
    {
        cout << "Yes\n";
    } 
    else 
    {
        cout << "No\n";
    }
}
