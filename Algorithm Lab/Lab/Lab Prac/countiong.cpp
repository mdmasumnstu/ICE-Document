#include <bits/stdc++.h>

using namespace std;
void counting_sort(int a[], int n, int pos)
{
    int c_arr[10] = {0};
    int b[n];

    cout << "Sorting for position (digit place) " << pos << ":\n";


    for (int i = 0; i < n; i++)
    {
        int x = (a[i] / pos) % 10;
        c_arr[x]++;
    }

    cout << "Frequency array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << c_arr[i] << " ";
    }
    cout << endl;


    for (int i = 1; i < 10; i++)
    {
        c_arr[i] += c_arr[i - 1];
    }

    cout << "Cumulative count array: ";
    for (int i = 0; i < 10; i++)
    {
        cout << c_arr[i] << " ";
    }
    cout << endl;


    for (int i = n - 1; i >= 0; i--)
    {
        int y = (a[i] / pos) % 10;
        b[c_arr[y] - 1] = a[i];
        c_arr[y]--;
    }


    for (int i = 0; i < n; i++)
    {
        a[i] = b[i];
    }

    cout << "Array after sorting on position " << pos << ": ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\n";
}

void Radix_sort(int a[], int n)
{
    int max_int = 0;
    for (int i = 0; i < n; i++)
    {
        if (max_int < a[i])
        {
            max_int = a[i];
        }
    }

    cout << "Initial array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\n";

    for (int pos = 1; max_int / pos > 0; pos *= 10)
    {
        counting_sort(a, n, pos);
    }
}

int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;
    int a[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Radix_sort(a, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
