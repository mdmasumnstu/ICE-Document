#include <iostream>
using namespace std;

int partition(int a[], int p, int r) {
    int temp1, temp2;
    int x = a[p];
    int i = p;

    for (int j = p + 1; j <= r; j++) {
        if (a[j] <= x) {
            i = i + 1;
            temp1 = a[i];
            a[i] = a[j];
            a[j] = temp1;
        }
    }
    temp2 = a[p];
    a[p] = a[i];
    a[i] = temp2;

    return i;
}

void quicksort(int a[], int p, int r) {
    if (p < r) {
        int q = partition(a, p, r);
        quicksort(a, p, q - 1);
        quicksort(a, q + 1, r);
    }
}

int main() {
    int a[100], n;

    cout << "Enter the input size: " << endl;
    cin >> n;

    cout << "The input size: " << n << endl;

    cout << "Enter the input elements: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "The input values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    quicksort(a, 0, n - 1);

    cout << "The sorted values: " << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

