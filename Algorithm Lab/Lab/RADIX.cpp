#include <iostream>
#include <cmath>
using namespace std;

void input_and_output(int a[], int n) 
{
    cout << "Enter the elements: "<<endl;
    for (int i = 0; i < n; i++) 
	{
        cin >> a[i];
    }

    cout << "The Array is: "<<endl;
    for (int i = 0; i < n; i++) 
	{
        cout << a[i] << " ";
    }
    cout << endl;
}

void counting_sort(int a[], int n, int exp) 
{
    int output[n]; 
    int count[10] = {0}; 

    for (int i = 0; i < n; i++) 
	{
        int digit = (a[i] / exp) % 10;
        count[digit]++;
    }

    for (int i = 1; i < 10; i++) 
	{
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; i--) 
	{
        int digit = (a[i] / exp) % 10;
        output[count[digit] - 1] = a[i];
        count[digit]--;
    }

    for (int i = 0; i < n; i++) 
	{
        a[i] = output[i];
    }
}

void radix_sort(int a[], int n) 
{
    
    int max = a[0];
    for (int i = 1; i < n; i++) 
	{
        if (a[i] > max) 
		{
            max = a[i];
        }
    }

    for (int exp = 1; max / exp > 0; exp *= 10) 
	{
        counting_sort(a, n, exp);
    }
}

int main() 
{
    int n;
    cout << "Enter the size: "<<endl;
    cin >> n;

    int a[n];
    input_and_output(a, n); 

    radix_sort(a, n); 

    cout << "Sorted Array: "<<endl;
    for (int i = 0; i < n; i++) 
	{
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

