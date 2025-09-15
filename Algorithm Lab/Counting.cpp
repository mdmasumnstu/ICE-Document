#include<iostream>
using namespace std;

void input(int a[], int n) 
{
    cout << "Enter the element: ";
	int i;
    for (i = 0; i < n; i++) 
	{
        cin >> a[i];
    }

    cout << "The Array is: ";
    for (int i = 0; i < n; i++) 
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void counting(int a[], int n) 
{
    int max = a[0],i;
    for (i = 1; i < n; i++) 
	{
        if (a[i] > max) 
		{
            max = a[i];
        }
    }

	cout<<"The Maximum Value: "<<max<<endl;
    int count[max + 1];

    for(i=0;i<n;i++)
	{
		count[a[i]]++;
	}


	for(i=1;i<=max;i++)
	{
		count[i]=count[i]+count[i-1];
	}

	int b[n];
	for(i=n-1;i>=0;i--)           //For stability 
	{
		b[count[a[i]]]=a[i];
        count[a[i]]--;
	}

	for(i=0;i<n;i++)
	{
		a[i]=b[i];
	}
}

int main()
{
    int n;
    cout << "Enter the size: ";
    cin >> n;

    int a[n];
    input(a, n); 
}