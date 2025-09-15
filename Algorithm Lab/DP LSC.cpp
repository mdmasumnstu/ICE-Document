#include <iostream>
#include <cstring> // For memset()
using namespace std;

#define MAX 1000 // Maximum length for input strings

int main() {
    string X, Y;
    int dp[MAX][MAX]; // Declare a 2D DP table

    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    int m = X.length();
    int n = Y.length();

    // Initialize DP table with 0
    memset(dp, 0, sizeof(dp));

    // Fill the DP table using bottom-up approach
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (X[i - 1] == Y[j - 1]) {
                dp[i][j] = 1 + dp[i - 1][j - 1]; // If characters match
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]); // Take the maximum value
            }
        }
    }

    // Get LCS length
    int length = dp[m][n];

    // Backtracking to find LCS string
    int i = m, j = n;
    string lcsStr = "";

    while (i > 0 && j > 0) {
        if (X[i - 1] == Y[j - 1]) {
            lcsStr = X[i - 1] + lcsStr; // Add character to LCS
            i--;
            j--;
        } else if (dp[i - 1][j] > dp[i][j - 1]) {
            i--;  // Move up
        } else {
            j--;  // Move left
        }
    }

    // Output results
    cout << "Length of LCS: " << length << endl;
    cout << "LCS: " << lcsStr << endl;

    return 0;
}
