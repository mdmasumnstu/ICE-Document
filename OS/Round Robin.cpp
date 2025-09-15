// Round Robin Scheduling
#include <iostream>
using namespace std;

int main() {
    int n, tq;
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter time quantum: ";
    cin >> tq;

    int bt[n], rt[n], wt[n] = {}, tat[n];
    cout << "Enter burst times:\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> bt[i];
        rt[i] = bt[i];
    }

    int time = 0, done;
    do {
        done = 1;
        for (int i = 0; i < n; i++) {
            if (rt[i] > 0) {
                done = 0;
                if (rt[i] > tq) {
                    time += tq;
                    rt[i] -= tq;
                } else {
                    time += rt[i];
                    wt[i] = time - bt[i];
                    rt[i] = 0;
                }
            }
        }
    } while (!done);

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + bt[i];
    }

    cout << "\nP\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << i + 1 << "\t" << bt[i] << "\t" << wt[i] << "\t" << tat[i] << "\n";
    }

    return 0;
}

