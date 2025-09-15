#include <bits/stdc++.h>

using namespace std;

void print(int A[], int n, int i)
{
    cout << "Heap: ";
    for (int j = i; j < n; j++)
    {
        cout << A[j] << " ";
    }
    cout << endl;
    cout << "Root value: " << A[0] << endl;
}

void max_heapify(int A[], int n, int i)
{
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest = i;

    if (l < n && A[l] > A[largest])
    {
        largest = l;
    }
    if (r < n && A[r] > A[largest])
    {
        largest = r;
    }
    if (largest != i)
    {
        swap(A[i], A[largest]);
        print(A, n, 0);
        max_heapify(A, n, largest);
    }
}

void Build_Max_heap(int A[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        max_heapify(A, n, i);
        cout << "Heap after max_heapify at index " << i << ": ";
        print(A, n, 0);
    }
}

void Heapsort(int A[], int n)
{
    Build_Max_heap(A, n);
    cout << "Max heap built: ";
    print(A, n, 0);

    for (int i = n - 1; i > 0; i--)
    {
        swap(A[0], A[i]);
        cout << "Heap after swapping root with index " << i << ": ";
        print(A, n, 0);
        max_heapify(A, i, 0);
    }
}

int main()
{
    int n;
    cout << "Enter Array size" << endl;
    cin >> n;
    int A[n];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    Heapsort(A, n);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << endl;

    return 0;
}
