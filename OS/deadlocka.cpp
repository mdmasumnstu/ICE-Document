#include <iostream>
using namespace std;

#define MAX 10

int main() {
    int n, m; // Number of processes and resources
    int allocation[MAX][MAX], maxNeed[MAX][MAX], need[MAX][MAX], available[MAX];
    bool finish[MAX] = {false};

    // Input number of processes and resources
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter number of resources: ";
    cin >> m;

    // Input Allocation Matrix
    cout << "\nEnter Allocation Matrix (P0 to P" << n - 1 << "):\n";
    for (int i = 0; i < n; i++) {
        cout << "Process P" << i << ": ";
        for (int j = 0; j < m; j++) {
            cin >> allocation[i][j];
        }
    }

    // Input Maximum Need Matrix
    cout << "\nEnter Maximum Need Matrix (P0 to P" << n - 1 << "):\n";
    for (int i = 0; i < n; i++) {
        cout << "Process P" << i << ": ";
        for (int j = 0; j < m; j++) {
            cin >> maxNeed[i][j];
        }
    }

    // Input Available Resources
    cout << "\nEnter Available Resources: ";
    for (int j = 0; j < m; j++) {
        cin >> available[j];
    }

    // Calculate Need Matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            need[i][j] = maxNeed[i][j] - allocation[i][j];
        }
    }

    // Deadlock Detection Logic
    int count = 0;
    bool deadlock = false;

    while (count < n) {
        bool found = false;

        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                bool canFinish = true;

                for (int j = 0; j < m; j++) {
                    if (need[i][j] > available[j]) {
                        canFinish = false;
                        break;
                    }
                }

                if (canFinish) {
                    for (int j = 0; j < m; j++) {
                        available[j] += allocation[i][j];
                    }

                    finish[i] = true;
                    found = true;
                    count++;
                }
            }
        }

        if (!found) {
            deadlock = true;
            break;
        }
    }

    // Display Results
    if (deadlock) {
        cout << "\nDeadlock detected! Processes involved:\n";
        for (int i = 0; i < n; i++) {
            if (!finish[i]) {
                cout << "P" << i << " ";
            }
        }
        cout << endl;
    } else {
        cout << "\nNo deadlock detected. All processes can finish.\n";
    }

    return 0;
}

