#include <iostream>
using namespace std;

int main() {
    int n, i;
    cout << "Enter number of processes: ";
    cin >> n;
    
    int burst[n], wait[n], turnaround[n];
    cout << "Enter burst times:\n";
    for(i = 0; i < n; i++) {
        cout << "P" << i + 1 << ": ";
        cin >> burst[i];
    }

    wait[0] = 0;
    for(i = 1; i < n; i++) {
        wait[i] = wait[i-1] + burst[i-1];
    }

    for(i = 0; i < n; i++) {
        turnaround[i] = wait[i] + burst[i];
    }

    cout << "\nProcess\tBurst\tWait\tTurnaround\n";
    for(i = 0; i < n; i++) {
        cout << "P" << i+1 << "\t" << burst[i] << "\t" << wait[i] << "\t" << turnaround[i] << endl;
    }

    return 0;
}

