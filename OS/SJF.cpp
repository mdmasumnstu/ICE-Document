// SJF Non-Preemptive
#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int id, bt;
};

bool cmp(Process a, Process b) {
    return a.bt < b.bt;
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    Process p[n];
    int wt[n], tat[n];

    cout << "Enter burst times:\n";
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "P" << p[i].id << ": ";
        cin >> p[i].bt;
    }

    sort(p, p + n, cmp);
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + p[i - 1].bt;
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + p[i].bt;
    }

    cout << "\nP\tBT\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].id << "\t" << p[i].bt << "\t" << wt[i] << "\t" << tat[i] << "\n";
    }

    return 0;
}

