#include<iostream>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the size: " << endl;
    cin >> n;

    // Input the array values
    int a[n];
    cout << "Enter the Values: " << endl;
    for(i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    cout << endl;

    // Output the original array
    cout << "The Array is: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    // Sorting Array (Bubble Sort)
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    // Output the sorted array
    cout << "The Sorted Array is: " << endl;
    for(i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

