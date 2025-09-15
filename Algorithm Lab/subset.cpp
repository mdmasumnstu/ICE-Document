#include <iostream>
using namespace std;

int main() {
    int n, targetSum;

    // Input the size of the set and the target sum
    cout << "Enter the size of the set: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the set: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> targetSum;

    // Create a DP table
    bool dp[n + 1][targetSum + 1];

    // Initialize the DP table
    for (int i = 0; i <= n; i++) {
        dp[i][0] = true; // Base case: sum 0 can always be made with an empty subset
    }
    for (int j = 1; j <= targetSum; j++) {
        dp[0][j] = false; // Cannot make a positive sum with 0 elements
    }

    // Fill the DP table iteratively
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= targetSum; j++) {
            if (arr[i - 1] <= j) {
                // Include or exclude the current element
                dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
            } else {
                // Exclude the current element
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    // Output the result
    if (dp[n][targetSum]) {
        cout << "Yes, a subset with the given sum exists." << endl;
    } else {
        cout << "No, no subset with the given sum exists." << endl;
    }

    return 0;
}
