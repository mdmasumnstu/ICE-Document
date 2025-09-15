#include <iostream>
using namespace std;

void inputArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
}


void displayArray(int arr[], int n) {
	
    cout << "The Array is: " << endl;
    for (int i = 0; i < n; i++) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMax(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1; i < n; i++) 
	{
        if (arr[i] > max) 
		{
            max = arr[i];
        }
    }
    return max;
}

int main() {
	
    int n;
    cin >> n;

    int a[n];
    inputArray(a, n);          
    displayArray(a, n);        
    int max = findMax(a, n);  

    cout << "The Maximum Value: " << max << endl;
    return 0;
}

