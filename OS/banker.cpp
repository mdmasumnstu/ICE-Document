#include <iostream>
using namespace std;

int main() {
    int P, R;
    cout << "Enter number of processes: ";
    cin >> P;
    cout << "Enter number of resources: ";
    cin >> R;

    int alloc[10][10], max[10][10], need[10][10];
    int avail[10], work[10], finish[10] = {0}, safeSeq[10];

    // Input allocation matrix
    cout << "Enter allocation matrix (" << P << "x" << R << "):\n";
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            cin >> alloc[i][j];

    // Input max matrix
    cout << "Enter maximum matrix (" << P << "x" << R << "):\n";
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            cin >> max[i][j];

    // Input available resources
    cout << "Enter available resources:\n";
    for (int i = 0; i < R; i++)
        cin >> avail[i];

    // Calculate need matrix
    for (int i = 0; i < P; i++)
        for (int j = 0; j < R; j++)
            need[i][j] = max[i][j] - alloc[i][j];

    // Initialize work = avail
    for (int i = 0; i < R; i++)
        work[i] = avail[i];

    int count = 0;

    while (count < P) {
        bool found = false;
        for (int i = 0; i < P; i++) {
            if (finish[i] == 0) {
                bool canRun = true;
                for (int j = 0; j < R; j++) {
                    if (need[i][j] > work[j]) {
                        canRun = false;
                        break;
                    }
                }

                if (canRun) {
                    for (int j = 0; j < R; j++)
                        work[j] += alloc[i][j];

                    safeSeq[count++] = i;
                    finish[i] = 1;
                    found = true;
                }
            }
        }

        if (!found) {
            cout << "\nSystem is not in a safe state.\n";
            return 0;
        }
    }

    // Output the safe sequence
    cout << "\nSystem is in a safe state.\nSafe sequence is: ";
    for (int i = 0; i < P; i++)
        cout << "P" << safeSeq[i] << (i == P - 1 ? "" : " -> ");
    cout << endl;

    return 0;
}

