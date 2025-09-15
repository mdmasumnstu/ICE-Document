// Priority Scheduling
#include <iostream>
#include <algorithm>
using namespace std;

struct Process {
    int id, bt, priority;
};

bool cmp(Process a, Process b) {
    return a.priority < b.priority;
}

int main() {
    int n;
    cout << "Enter number of processes: ";
    cin >> n;
    Process p[n];
    int wt[n], tat[n];

    cout << "Enter burst time and priority:\n";
    for (int i = 0; i < n; i++) {
        p[i].id = i + 1;
        cout << "P" << p[i].id << " (BT Priority): ";
        cin >> p[i].bt >> p[i].priority;
    }

    sort(p, p + n, cmp);
    wt[0] = 0;
    for (int i = 1; i < n; i++) {
        wt[i] = wt[i - 1] + p[i - 1].bt;
    }

    for (int i = 0; i < n; i++) {
        tat[i] = wt[i] + p[i].bt;
    }

    cout << "\nP\tBT\tPriority\tWT\tTAT\n";
    for (int i = 0; i < n; i++) {
        cout << "P" << p[i].id << "\t" << p[i].bt << "\t" << p[i].priority << "\t\t" << wt[i] << "\t" << tat[i] << "\n";
    }

    return 0;
}

