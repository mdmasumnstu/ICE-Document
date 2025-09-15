#include <iostream>
using namespace std;

int main() {
    int n, amount;
    cout << "Amount: ";
    cin >> amount;

    cout << "Number of coins: ";
    cin >> n;

    int coin[n];
    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    cout << "The coins: ";
    for (int i = 0; i < n; i++) {
        cout << coin[i] << " ";
    }
    cout << endl;

    int dp[n + 1][amount + 1];

    // Base case: 1 way to make sum 0
    for (int i = 0; i <= n; i++) {
        dp[i][0] = 1;
    }

    // Fill rest of dp table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {
            if (coin[i - 1] > j) {
                dp[i][j] = dp[i - 1][j]; // Can't include the coin
            } else {
                dp[i][j] = dp[i - 1][j] + dp[i][j - coin[i - 1]];
            }
        }
    }

    cout << "Number of ways to make sum " << amount << ": " << dp[n][amount] << endl;

    return 0;
}

