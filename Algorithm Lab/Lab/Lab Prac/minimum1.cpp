#include <iostream>
#include <climits> // For INT_MAX
using namespace std;

int main() {
    int n, amount;
    cout << "Number of Coins: ";
    cin >> n;

    cout << "Target Amount: ";
    cin >> amount;

    int coin[n];
    cout << "Enter coin denominations: ";
    for (int i = 0; i < n; i++) {
        cin >> coin[i];
    }

    // dp[j] = minimum coins needed for amount j
    int dp[amount + 1];

    // Initialize dp with large number (impossible states)
    for (int i = 0; i <= amount; i++) {
        dp[i] = INT_MAX - 1; // Subtract 1 to avoid overflow later
    }
    dp[0] = 0; // Base case: 0 coins needed for amount 0

    // Compute dp values
    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coin[j] <= i && dp[i - coin[j]] != INT_MAX - 1) {
                dp[i] = min(dp[i], dp[i - coin[j]] + 1);
            }
        }
    }

    if (dp[amount] == INT_MAX - 1)
        cout << "It's not possible to make amount " << amount << " with given coins." << endl;
    else
        cout << "Minimum coins required to make amount " << amount << ": " << dp[amount] << endl;

    return 0;
}

